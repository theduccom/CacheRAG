#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <complex>
#include <ctime>
#include <cstdlib>

using namespace std;

inline int to_int(string s) {int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string to_str(T x) {ostringstream sout; sout << x; return sout.str();}

typedef long long ll;

int main()
{
	vector<int> prime;
	int range, ans;
	bool primeList[200001];

	memset(primeList, true, sizeof(primeList));

	for(int i = 2; i < 5000; i++)
	{
		if(primeList[i] == false)
			continue;

		for(int j = i*2; j < 200000; j += i)
		{
			primeList[j] = false;
		}
	}

	for(int i = 2; i < 200000; i++)
	{
		if(primeList[i] == true)
		{
			prime.push_back(i);
		}
	}

	while(cin >> range)
	{
		if(range == 0)
			break;

		ans = 0;

		for(int i = 0; i < range; i++)
		{
			ans += prime[i];
		}

		cout << ans << endl;
	}
}
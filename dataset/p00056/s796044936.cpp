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
	vector<int> primeList;
	bool used[50002];
	
	memset(used, true, sizeof(used));

	for(int i = 2; i <= sqrt(50000); i++)
	{
		if(used[i] == false)
		{
			continue;
		}
		for(int j = i*2; j <= 50000; j += i)
		{
			used[j] = false;
		}
	}
	for(int i = 2; i < 50000; i++)
	{
		if(used[i] == true)
		{
			primeList.push_back(i);
		}
	}
	int num, ans;
	while(cin >> num)
	{
		if(num == 0)
		{
			break;
		}
		ans = 0;

		for(int i = 0; i < primeList.size() && primeList[i] <= (num/2); i++)
		{
			if(used[num - primeList[i]] == true)
			{
				ans++;
			}
		}

		cout << ans << endl;
	}
}
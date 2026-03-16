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
	int num;
	vector<int> primeList;
	bool used[51000];
	memset(used, true, sizeof(used));

	for(int i = 2; i < 1000; i++)
	{
		if(used[i] == false)
		{
			continue;
		}
		for(int j = i*2; j < 51000; j += i)
		{
			used[j] = false;
		}
	}
	for(int i = 2; i < 51000; i++)
	{
		if(used[i] == true)
		{
			primeList.push_back(i);
		}
	}
	
	while(cin >> num)
	{
		if(binary_search(primeList.begin(), primeList.end(), num))
		{
			printf("%d %d\n",*(upper_bound(primeList.begin(), primeList.end(), num)-2), *upper_bound(primeList.begin(), primeList.end(), num));
		}
		else
		{
			printf("%d %d\n",*(upper_bound(primeList.begin(), primeList.end(), num)-1), *upper_bound(primeList.begin(), primeList.end(), num));
		}	
	}
}
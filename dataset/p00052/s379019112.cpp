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
	ll num;
	int cp, cnt;
	bool j;
	while(cin >> num)
	{
		if(num == 0)
			break;
		
		ll ans = 0;
		while(num)
		{
			ans += num / 5;
			num /= 5;
		}
		cout << ans << endl;
	}
}
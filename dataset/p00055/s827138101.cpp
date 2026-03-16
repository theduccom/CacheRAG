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
	double num, ans;
	while(cin >> num)
	{
		ans = num;
		num *= 2;
		ans += num;

		for(int i = 0; i < 4; i++)
		{
			num /= 3;
			ans += num;
			num *= 2;
			ans += num;
		}

		printf("%.10f\n" ,ans);
	}
}
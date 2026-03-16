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
	int n;
	double xa, ya, ra, xb, yb, rb;

	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
		
		double j = sqrt( (xb-xa)*(xb-xa) + (yb-ya)*(yb-ya) );

		if(ra + rb < j)
		{
			cout << 0 << endl;
		}
		else if(j + rb < ra)
		{
			cout << 2 << endl;
		}
		else if(j + ra < rb)
		{
			cout << -2 << endl;
		}
		else if(j + rb >= ra)
		{
			cout << 1 << endl;
		}
	}
}
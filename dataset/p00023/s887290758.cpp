#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>	// require sort next_permutation count __gcd reverse etc.
#include <cstdlib>	// require abs exit atof atoi 
#include <cstdio>		// require scanf printf
#include <functional>
#include <numeric>	// require accumulate
#include <cmath>		// require fabs
#include <climits>
#include <limits>
#include <cfloat>
#include <iomanip>	// require setw
#include <sstream>	// require stringstream 
#include <cstring>	// require memset
#include <cctype>		// require tolower, toupper
#include <fstream>	// require freopen
#include <ctime>		// require srand
#define rep(i,n) for(int i=0;i<(n);i++)
#define ALL(A) A.begin(), A.end()
#define EPS 1e-9

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

double calc_dis (double x1, double y1, double x2, double y2 )
{
	return sqrt ((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2 ) );
}

int main()
{
//	cut here before submit 
//	freopen ("testcase.CI", "r", stdin );
	int n;
	scanf ("%d", &n );
	rep (i, n ){
		double xa, ya, ra, xb, yb, rb;
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
		double d = calc_dis (xa, ya, xb, yb );
//		cerr << "d: " << d << endl;
		int res = -1;
		if (ra + rb + EPS < d ){	// A and B do not overlap
			res = 0;
		}else
		if (fabs (ra + rb - d ) < EPS || fabs (fabs(ra - rb ) - d ) < EPS || (ra + rb + EPS > d  && fabs (ra - rb ) < d ) ){ // if circumference of A and B intersect
			res = 1;
		}else
		if (ra > rb ){	// if B is in A, 
			res = 2;
		}else
		if (ra < rb ){	// if A is in B,
			res = -2;
		}else{
			res = 1;		// if A and B is same
		} // end if
		cout << res << endl;
	} // end rep
		
	return 0;
}
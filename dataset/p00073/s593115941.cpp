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

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

double calc_h (int x, int h )
{
	return sqrt((double)h*h + (double)x*x/4.);
}

int main()
{
//	cut here before submit 
//	freopen ("testcase.SAQP", "r", stdin );
	int x, h;
	while (scanf ("%d %d", &x, &h ), x, h ){
		double th = calc_h (x, h );
//		cerr << "th: " << th << endl;
		double res = (double)x*x + 2.*(double)x*th;
		printf ("%.9lf\n", res );
	} // end loop
		
	return 0;
}
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
typedef pair<double,double> DD;

double hellon (double a, double b, double c )
{
	double s = (a+b+c)/2.;
	double res = sqrt (s*(s-a)*(s-b)*(s-c) );

	return res;
}

double calc_dis (DD a, DD b )
{
	return sqrt ((a.first - b.first )*(a.first - b.first ) + (a.second - b.second )*(a.second - b.second ) );
}

int main()
{
//	cut here before submit 
//	freopen ("testcase.area_of_polygon", "r", stdin );
	double x, y;
	vector<DD> p; p.clear();
	while (scanf ("%lf,%lf", &x, &y ) != EOF ){
		p.push_back (DD (x, y ) );
	} // end loop
	int n = p.size();
	double S = 0.;
	for (int i = 1; i < n - 1; i++ ){
		S += hellon (calc_dis (p[i], p[0] ), calc_dis (p[i+1], p[i] ), calc_dis (p[0], p[i+1]) );
	} // end for
	printf ("%.7lf\n", S );
		
	return 0;
}
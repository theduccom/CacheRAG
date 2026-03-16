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

int main()
{
//	cut here before submit 
//	freopen ("testcase.seq", "r", stdin );

	double a0;
	while (cin >> a0 ){
		vector<double> a(11, 0. );
		a[1] = a0;
		for (int i = 2; i <= 10; i++ ){
			if (i % 2 == 0 ){
				a[i] = 2.*a[i-1];
			}else{
				a[i] = a[i-1]/3.;
			} // end if
		} //end for
		double sum = accumulate (ALL (a ), 0. );
		printf ("%.12lf\n", sum );
	} // end loop
		
	return 0;
}
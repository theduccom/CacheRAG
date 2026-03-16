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

ll stoll (string s )
{
	stringstream ss (s );
	ll res;
	ss >> res;

	return res;
}

int main()
{
//	cut here before submit 
//	freopen ("testcase.diff2", "r", stdin );
	int n;
	scanf ("%d", &n );
	
	rep (i, n ){
		string num;
		cin >> num;
		int m = num.length();
		vector<int> N (m, 0 );
		rep (j, m ) N[j] = (int)(num[j] - '0' );

		sort (ALL (N ) );
		string small = "";
		rep (j, m ) small += (char)(N[j] + '0');

		string large = "";
		sort (ALL (N), greater<int>() );
		rep (j, m ) large += (char)(N[j] + '0');

		ll s = stoll (small );
		ll l = stoll (large );

		cout << l - s << endl;

	} // end rep

	return 0;
}
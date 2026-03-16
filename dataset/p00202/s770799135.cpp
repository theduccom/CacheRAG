#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>	// require sort next_permutation count etc.
#include <cstdlib>	// require abs
#include <cstdio>	// require printf
#include <functional>
#include <numeric>	// require accumulate
#include <cmath>
#include <climits>
#include <limits>
#include <cfloat>
#include <iomanip>	// require setw
#include <sstream>	// require stringstream 
#include <cstring>	// require memset
#include <cctype>	// require tolower, toupper
#include <fstream>	// require freopen

using namespace std;

const int MAX_N = 1000000;
bool prime[MAX_N+1];

void make_prime (void )
{
	fill (prime, prime + MAX_N, true );

	prime[0] = false;
	prime[1] = false;

	for (int i = 2; i < MAX_N + 1; ++i ){
		if (prime[i] ){
			for (int j = 2*i; j < MAX_N + 1; j += i ){
				prime[j] = false;
			} // end for
		} // end if
	} // end for
}

bool dp[MAX_N+1];

int main()
{
//	cut here before submit 
//	freopen ("testcase.be", "r", stdin );
	int n, x;

	make_prime ();

	while (cin >> n >> x && n && x ){
		vector <int> cost (n, 0 );
		for (int i = 0; i < n; ++i ){
			cin >> cost[i];
		} // end for
		memset (dp, false , sizeof (dp ) );

		dp[0] = true;
		for (int i = 0; i < n; ++i ){
			for (int j = cost[i]; j <= x; ++j ){
				dp[j] |= dp[j - cost[i]];
			} // end if
		} // end for

		int res = 0;
		for (int j = MAX_N; j >= 0; --j ){
			if (dp[j] && prime[j] ){
				res = j;
				break;
			} // end if
		} // end for

		if (res == 0 ){
			cout << "NA" << endl;
		}else{
			cout << res << endl;
		} // end if
	} // end loop
		
	return 0;
}
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

const int MAX_N = 50030; 

bool prime[MAX_N];
vector<int> p;

void make_prime (void )
{
	fill (prime, prime+MAX_N, true );
	prime[0] = false;
	prime[1] = false;
	for (int i = 2; i < MAX_N; i++ ){
		if (prime[i] ){
			for (int j = 2*i; j < MAX_N; j += i ){
				prime[j] = false;
			} // end for
		} // end if
	} // end for

	p.clear();
	rep (i, MAX_N ){
		if (prime[i] ) p.push_back (i );
	} // end rep

//	cerr << "last_prime: " << p[p.size() - 1] << endl;
}

int main()
{
//	cut here before submit 
//	freopen ("testcase.PNII", "r", stdin );
	make_prime ();

	int n;
	while (~scanf ("%d", &n ) ){
		int max_p, min_p;
		vector<int>::iterator it = upper_bound (ALL (p ), n );
		int i = (int)(it-p.begin());
		min_p = p[i];
		for (; i >= 0; i-- ){
			if (p[i] < n ){
				max_p = p[i];
				break;
			} // end if
		} // end for
		printf ("%d %d\n", max_p, min_p );
	} // end while	

	return 0;
}
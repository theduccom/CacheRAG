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
//	freopen ("testcase.SA", "r", stdin );
	ll sumv = 0LL, sump = 0LL;
	string str = "";
	int cnt = 0;
	while (getline (cin, str ) ){
		if (str.empty() ) break;
		while (str.find(',') != string::npos ) str = str.replace(str.find(','), 1, " ");
		int volume, prices;
		stringstream ss (str );
		ss >> prices >> volume;
		sumv += (ll)volume; sump += (ll)volume*prices;
		cnt++;
	} // end loop

	printf ("%lld\n", sump );
	printf ("%d\n", (int)((double)sumv/cnt+0.5) );
	
	return 0;
}
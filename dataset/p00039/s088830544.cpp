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
typedef pair<char,int> CI;
//							1,   5,   10,  50,   100,  500, 1000
const char Roman[] = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };

int main()
{
//	cut here before submit 
//	freopen ("testcase.RF", "r", stdin );
	map<char,int> trans; trans.clear();
	int m = sizeof (Roman)/sizeof (Roman[0] );
//	vector<CI> trans (m );
	int curr = 1;
	rep (i, m ){
		if (i % 2 == 0 ){
			trans[Roman[i]] = curr;
		}else{
			trans[Roman[i]] = 5*curr;
			curr *= 10;
		} // end if
	} // end rep
/*
	rep (i, m ){
		cout << trans[i].first << ':' << trans[i].second << endl;
	} // end rep
*/


	string str = "";
	while (getline (cin, str ) ){
		int res = 0;
		int n = str.length();
		for (int i = 1; i < n; i++ ){
			int prev = trans[str[i-1]];
			int curr = trans[str[i]];
			if (prev >= curr ){
				res += prev;
			}else{
				res -= prev;
			} // end if
		} // end for
		res += trans[str[n-1]];
		printf ("%d\n", res );
	} // end loop
		
	return 0;
}
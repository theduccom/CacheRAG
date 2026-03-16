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

const int pattern[7][4][2] = {
					{ { 0, 0 }, { 0, 1 }, { 1, 0 }, { 1, 1 } },	// A
					{ { 0, 0 }, { 1, 0 }, { 2, 0 }, { 3, 0 } },	// B
					{ { 0, 0 }, { 0, 1 }, { 0, 2 }, { 0, 3 } },	// C
					{ { 0, 0 }, { 1, 0 }, { 1,-1 }, { 2,-1 } },	// D
					{ { 0, 0 }, { 0, 1 }, { 1, 1 }, { 1, 2 } },	// E
					{ { 0, 0 }, { 1, 0 }, { 1, 1 }, { 2, 1 } },	// F
					{ { 0, 0 }, { 0, 1 }, {-1, 1 }, {-1, 2 } }};	// G
int grid[8][8];

int main()
{
//	cut here before submit 
//	freopen ("testcase.FS", "r", stdin );
	bool end = false;
	while (1 ){
		memset (grid, 0, sizeof (grid ) );
		string str = "";
		rep (i, 8 ){
			if (getline (cin, str ) ){
				rep (j, 8 ){
					grid[i][j] = (int)(str[j] - '0' );
				} // end rep
			}else{
				end = true;
				break;
			} // end if
		} // end rep
		if (end ) break;
		int res = 0;
		bool found = false;
		rep (row, 8 ){
			rep (col, 8 ){
				if (grid[row][col] == 1 ){
					rep (p, 7 ){
						bool ok = true;
						rep (k, 4 ){
							int nr = row + pattern[p][k][0];
							int nc = col + pattern[p][k][1];
							if (nr < 0 || nr >= 8 || nc < 0 || nc >= 8 || grid[nr][nc] == 0 ){
								ok = false;
								break;						
							} // end if
						} // end rep
						if (ok ){
							res = p;
							found = true;
							break;
						} // end if
					} // end rep
				} // end if
				if (found ) break;
			} // end rep
			if (found ) break;
		} // end rep

		cout << (char)(res + 'A' ) << endl;
		getline (cin, str );
	} // end loop
		
	return 0;
}
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

int plane[12][12];
bool used[12][12];
const int dr[] = {-1, 0, 1, 0 };
const int dc[] = { 0, 1, 0,-1 };

void dfs (int r, int c )
{
	used[r][c] = true;
	rep (k, 4 ){
		int nr = r + dr[k];
		int nc = c + dc[k];
		if (nr < 0 || nr >= 12 || nc < 0 || nc >= 12 ) continue;
		if (used[nr][nc] || plane[nr][nc] == 0 ) continue;
		dfs (nr, nc );
	} // end rep
}

void disp_plane (void )
{
	rep (i, 12 ){
		rep (j, 12 ){
			cerr << plane[i][j];
		} // end rep
		cerr << endl;
	} // end rep
}

int main()
{
//	cut here before submit 
//	freopen ("testcase.island", "r", stdin );

	while (true ){
		string str = "";
		memset (plane, 0, sizeof (plane ) );
		rep (i, 12 ){
			cin >> str;
			if (cin.eof() ){
				goto end;
			} // end if
			rep (j, 12 ){
				plane[i][j] = (int)(str[j] - '0' );
			} // end rep
		} // end rep
//		disp_plane ();

		memset (used, false, sizeof (used ) );
		int res = 0;
		rep (row, 12 ){
			rep (col, 12 ){
				if (!used[row][col] && plane[row][col] == 1 ){
					res++;
					dfs (row, col );
				} // end if
			} // end rep
		} // end rep
		printf ("%d\n", res );
	} // end loop
end:;
	return 0;
}
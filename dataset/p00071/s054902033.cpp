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

int bomb[8][8];

void disp_bomb (void )
{
	rep (i, 8 ){
		rep (j, 8 ){
			cout << bomb[i][j];
		} // end rep
		cout << endl;
	} // end rep
}

void explosion (int row, int col )
{
	bomb[row][col] = 0;
	for (int i = row; i <= row + 3 && i < 8; i++ ){
		if (bomb[i][col] ) explosion (i, col );
	} // end for
	for (int i = row; i >= row - 3 && i >= 0; i-- ){
		if (bomb[i][col] ) explosion (i, col );
	} // end for
	for (int j = col; j <= col + 3 && j < 8; j++ ){
		if (bomb[row][j] ) explosion (row, j );
	} // end for
	for (int j = col; j >= col - 3 && j >= 0; j-- ){
		if (bomb[row][j] ) explosion (row, j );
	} // end for
}

int main()
{
//	cut here before submit 
//	freopen ("testcase.Bombs_Chain", "r", stdin );
	int n;
	scanf ("%d", &n );
	int cnt = 0;
	while (n-- ){
		memset (bomb, 0, sizeof (bomb ) );
		rep (i, 8 ){
			rep (j, 8 ){
				scanf ("%1d", &bomb[i][j] );
			} // end rep
		} // end rep
		int x, y;
		scanf ("%d %d", &x, &y );
		x--, y--;
//		disp_bomb ();
//		cout << endl;
		explosion (y, x );
		printf ("Data %d:\n", ++cnt );
		disp_bomb ();
//		cout << endl;
	} // end while
		
	return 0;
}
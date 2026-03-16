#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <numeric>
#include <cmath>
#include <climits>
#include <limits>
#include <cfloat>
#include <fstream>

using namespace std;

#define SPACE 0
#define BOMB 1
#define EXP -1

void disp_map (vector <vector <int> > m )
{
	int size = m.size();
	int len  = m[0].size();
	int i,j;

	for (i = 3; i < size - 3; ++i){
		for (j = 3; j < len - 3; ++j){
//			cout << setw(2) << m[i][j] << ' ';
			cout << m[i][j];
		} // end for
		cout << endl;
	} // end for
//	cout << endl;
}
void explosion (vector <vector <int> >& m, int by, int bx )
{
	const int dir[][2] = { {-1, 0 }, { 0, 1 }, { 1, 0 }, { 0, -1 } }; // up right down left
	int i,k;

	m[by][bx] = EXP;

	for (k = 0; k < 4; ++k){
		for (i = 1; i <= 3; ++i){
			if (m[by + i*dir[k][0]][bx + i*dir[k][1]] == BOMB){
				explosion (m, by + i*dir[k][0], bx + i*dir[k][1] );
			} // end if
			m[by + i*dir[k][0]][bx + i*dir[k][1]] = EXP;
		} // end for
	} // end for 
/*
		if (m[by-i][bx] == 1){
			explosion (m, by - i, bx );
		} // end if
		m[by-i][bx] = -1;
		if (m[by+i][bx] == 1){
			explosion (m, by + i, bx );
		} // end if
		m[by+i][bx] = -1;
		if (m[by][bx-i] == 1){
			explosion (m, by, bx - i );
		} // end if
		m[by][bx-i] = -1;
		if (m[by][bx+i] == 1){
			explosion (m, by, bx + i );
		} // end if
		m[by][bx+i] = -1;
*/

}
	
void remain_bomb (vector <vector <int> >& m )
{
	int size = m.size();
	int len  = m[0].size();
	int i,j;

	for (i = 0; i < size; ++i){
		for (j = 0; j < len; ++j){
			if (m[i][j] == EXP){
				m[i][j] = SPACE;
			} // end if
		} // end for
	} // end for
}
		 
int main()
{
//	cut here before submit 
//	freopen("testcase.bomb", "r", stdin);
	string str = "";
	int n;

	getline (cin, str );
	stringstream ssn(str);
	ssn >> n;
	int k;
	
	for (k = 0; k < n; ++k){
		getline (cin, str );

		vector <vector <int> > M (8 + 6, vector <int> (8 + 6, SPACE ) );
		int i,j;
		for (i = 0; i < 8; ++i){
			getline (cin, str );
			for (j = 0; j < 8; ++j){
				M[i+3][j+3] = str[j] - '0';
			} // end for
		} // end for
		getline (cin, str );
		int bx, by;
		stringstream ssx (str );
		ssx >> bx;
		getline (cin, str );
		stringstream ssy (str );
		ssy >> by;
		
//		disp_map (M );
//		cout << '(' << bx << ',' << by <<')' << endl;
		explosion (M, by + 3 - 1, bx + 3 - 1 );
//		disp_map (M );

		remain_bomb (M );
		cout << "Data " << (k+1) << ':' << endl;
		disp_map (M );

	} // end loop

//	cout << res << endl;	
		
	return 0;
}
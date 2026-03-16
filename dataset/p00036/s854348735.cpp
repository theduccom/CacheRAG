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

const char figure[][4][4] = {
				{
					{'1', '1', '0', '0' },
					{'1', '1', '0', '0' },
					{'0', '0', '0', '0' },
					{'0', '0', '0', '0' }
				},
				{
					{'1', '0', '0', '0' },
					{'1', '0', '0', '0' },
					{'1', '0', '0', '0' },
					{'1', '0', '0', '0' }
				},
				{
					{'1', '1', '1', '1' },
					{'0', '0', '0', '0' },
					{'0', '0', '0', '0' },
					{'0', '0', '0', '0' }
				},
				{
					{'0', '1', '0', '0' },
					{'1', '1', '0', '0' },
					{'1', '0', '0', '0' },
					{'0', '0', '0', '0' }
				},
				{
					{'1', '1', '0', '0' },
					{'0', '1', '1', '0' },
					{'0', '0', '0', '0' },
					{'0', '0', '0', '0' }
				},
				{
					{'1', '0', '0', '0' },
					{'1', '1', '0', '0' },
					{'0', '1', '0', '0' },
					{'0', '0', '0', '0' }
				},
				{
					{'0', '1', '1', '0' },
					{'1', '1', '0', '0' },
					{'0', '0', '0', '0' },
					{'0', '0', '0', '0' }
				}
			};

bool match_pattern (int k, int row, int col, vector <string> plane)
{
	int i,j;

	for (i = 0; i < 4; ++i){
		for (j = 0; j < 4; ++j){
			if (plane[row+i][col+j] == figure[k][i][j]){
				continue;
			}else{
				return false;
			} // end if
		} // end for
	} // end for
	
	return true;
}
	
int main()
{
//	cut here before submit 
//	freopen("testcase.fs", "r", stdin);
	string str = "";
	int count = 0;
	int row  = 0;
	int i,j,k;

	vector <string> plane (11, string(11, '0') );
	
	while (getline (cin, str ) ){
		if (str.empty() && count < 2){
			++count;
			row = 0;
			continue;
		}else{
			count = 0;
		} // end if

		if (count > 1){
			break;
		} // end if

		for (j = 0; j < str.length(); ++j){
			plane[row][j] = str[j];
		} // end for
		++row;
		int res = -1;
		if (row == 8){
			for (i = 0; i < 8; ++i){
				for (j = 0; j < 8; ++j){
					if (plane[i][j] == '0'){
						if (match_pattern (3, i, j, plane) ){
							res = 3;
							goto result;
						} // end if
						if ( match_pattern (6, i, j, plane) ){
							res = 6;
							goto result;
						} // end if			
					}else{	// if (plane[i][j] == '1')
						for (k = 0; k < 7; ++k){
							if (k != 3 && k != 6 && match_pattern (k, i, j, plane) ){
								res = k;
								goto result;
							} // end if
						} // end for
					} // end if
				} // end for
			} // end for
		} // end if
result:
		if (res != -1){
			char c = 'A'+res;
			cout << c << endl;
		} // end if			

	} // end while
		
	return 0;
}
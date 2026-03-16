#include <iostream>
#include <vector>
#include <string>
//#include <fstream>

using namespace std;

void dfs (int row, int col, vector <string> island, vector <vector <bool> > & visited)
{
	// right, down, left, up order
	const int dir[][2] =  { { 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 } }; 
	int k;

	visited[row][col] = true;

	for (k = 0; k < 4; ++k){
		int nrow = row + dir[k][0];
		int ncol = col + dir[k][1];
		if (nrow < 0 || nrow >= 12 || ncol < 0 || ncol >= 12 ){
			continue;
		} // end if
		if (!visited[nrow][ncol] && island[nrow][ncol] == '1' ){
			dfs (nrow, ncol, island, visited );
		} // end if
	} // end for
}
	
int main()
{
//	cut here before submit 
//	freopen("testcase.island2", "r", stdin);
	string str = "";

	while (getline (cin, str ) ) {
		if (str.empty() ){
			continue;
		} // end if

		vector <string> island (12, string (12, ' ' ) );
		int i,j;

		for (i = 0; i < 12; ++i){
			for (j = 0; j < 12; ++j){
				island[i][j] = str[j];
			} // end for 
			getline (cin, str );
		} // end for

		vector <vector <bool> > visited (12, vector <bool> (12, false ) );
		int res = 0;

		for (i = 0; i < 12; ++i){
			for (j = 0; j < 12; ++j){
				if (!visited[i][j] && island[i][j] == '1'){
					dfs (i, j, island, visited );
					++res;
				} // end if
			} // end for
		} // end for

		cout << res << endl;	

	} // end loop
		
	return 0;
}
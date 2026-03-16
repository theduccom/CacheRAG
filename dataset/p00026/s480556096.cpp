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

void disp_paper (vector <vector <int> > paper )
{
	int i,j;

	cout << endl;
	cout << "n:";
	for (i = 0; i < 10; ++i){
		cout << i << ' ';
	} // end for
	cout << endl;

	for (i = 2; i < 12; ++i){
		cout << (i-2) << ' ';
		for (j = 2; j < 12; ++j){
			cout << paper[i][j] << ' ';
		} // end for
		cout << endl;
	} // end for
	cout << endl;
}

int main()
{
//	cut here before submit 
//	freopen("testcase.di", "r", stdin);
	const int small[][3] = { 
					{ 0, 1 ,0 },
					{ 1, 1, 1 },
					{ 0, 1, 0 } 
				};
	const int medium[][3] = {
					{ 1, 1, 1 },
					{ 1, 1, 1 },
					{ 1, 1, 1 }
				};
	const int large[][5] = {
					{ 0, 0, 1, 0, 0 },
					{ 0, 1, 1, 1, 0 },
					{ 1, 1, 1, 1, 1 },
					{ 0, 1, 1, 1, 0 },
					{ 0, 0, 1, 0, 0 }
				};
										
	string str = "";
	vector <vector <int> > paper (14, vector <int> (14, 0 ) );
	vector <int> px, py, size;

	while (getline (cin, str ) ){
		int x, y, s;
		while (str.find(',') != string::npos ){
			str = str.replace(str.find(','), 1, " ");
		} // end while
		stringstream ss(str);
		ss >> x >> y >> s;
		px.push_back(x); py.push_back(y); size.push_back(s);		
	} // end for
	
	int n = px.size();
	int i,j,k;

//	for (i = 0; i < n; ++i){
//		cout << px[i] << ' ' << py[i] << ' ' << size[i] << endl;
//	} // end for

	for (k = 0; k < n; ++k){
		if (size[k] == 1){
			for (i = -1; i <= 1; ++i){
				for (j = -1; j <= 1; ++j){
					paper[ py[k] + 2 + i][ px[k] + 2 + j] += small[i+1][j+1];
				} // end for
			} // end for
		}else if (size[k] == 2){
			for (i = -1; i <= 1; ++i){
				for (j = -1; j <= 1; ++j){
					paper[ py[k] + 2 + i][ px[k] + 2 + j] += medium[i+1][j+1];
				} // end for
			} // end for
		}else if (size[k] == 3){
			for (i = -2; i <= 2; ++i){
				for (j = -2; j <= 2; ++j){
					paper[ py[k] + 2 + i][ px[k] + 2 + j] += large[i+2][j+2];
				} // end for
			} // end for
		} // end if
//		disp_paper (paper );
	} // end for

	int res = 0;
	int maxd = 0;
	for (i = 2; i < 12; ++i){
//		cout << (i-2) << ' ';
		for (j = 2; j < 12; ++j){
			if (paper[i][j] == 0){
				++res;
			}else{
				maxd = max (maxd, paper[i][j]);
			} // end if
//			cout << paper[i][j] << ' ';
		} // end for
//		cout << endl;
	} // end for

	cout << res << endl;
	cout << maxd << endl;
		
	return 0;
}
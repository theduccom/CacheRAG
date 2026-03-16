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

int main()
{
//	cut here before submit 
//	freopen("testcase.mc", "r", stdin);
	string str = "";
	int n;

	while (getline (cin, str ) ){
		stringstream ssn(str);
		ssn >> n;
		if (n == 0){
			break;
		} // end if

		vector <vector <int> > sum (n+1, vector <int> (n+1, 0 ) );
		int i,j;

		for (i = 0; i < n; ++i){
			getline (cin, str );
			stringstream ss (str );
			for (j = 0; j < n; ++j){
				ss >> sum[i][j];
			} // end for
		} // end for

		for (i = 0; i < n; ++i){
			for (j = 0; j < n; ++j){
				sum[i][n] += sum[i][j];
			} // end for
		} // end for

		for (i = 0; i < n; ++i){
			for (j = 0; j < n; ++j){
				sum[n][j] += sum[i][j];
			} // end for
		} // end for
		for (i = 0; i < n; ++i){
			sum[n][n] += sum[i][n];
		} // end for

		for (i = 0; i <= n; ++i){
			for (j = 0; j <= n; ++j){
				cout << setw(5) << sum[i][j];
			} // end for
			cout << endl;
		} // end for
	} // end loop
		
	return 0;
}
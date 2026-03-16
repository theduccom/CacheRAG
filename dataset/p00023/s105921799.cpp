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
//	freopen("testcase.ci", "r", stdin);
	string str = "";
	int n;

	getline (cin, str );
	stringstream ssn(str);
	ssn >> n;

	int i;
	for (i = 0; i < n; ++i){
		getline (cin, str );
		vector <double> cx (2, 0.0);
		vector <double> cy (2, 0.0);
		vector <double> r  (2, 0.0);
		stringstream ss(str);
		ss >> cx[0] >> cy[0] >> r[0] >> cx[1] >> cy[1] >> r[1];

		double d = sqrt ( (cx[1] - cx[0])*(cx[1] - cx[0]) + (cy[1] - cy[0])*(cy[1] - cy[0]) );
		if (d >= 0 && d < fabs (r[1] - r[0])){
			if (r[0] > r[1]){ // B in A
				cout << "2" << endl;
			}else if (r[0] < r[1]){ // A in B
				cout << "-2" << endl;
			}else{ // if (r[0] == r[1])
				cout << "1" << endl;
			} // end if
		}else if ( ( d >= fabs(r[1] - r[0]) ) && ( d <= r[0] + r[1] ) ){
			cout << "1" << endl;
		}else{
			cout << "0" << endl;
		} // end if
	} // end for
		
	return 0;
}
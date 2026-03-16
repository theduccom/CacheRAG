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

bool isenable (double r0, double r ){

//	cout << "r0: " << r0 << " r: " << r << endl;
	
	if (r0 > 0. && r0 < r ){
		return true;
	} // end if

	return false;
}

bool estimate (double a, double b, double r )
{
//	cout << "a: " << a << " b: " << b << " r: " << r << endl;

	if (a/2. > 0. && a/2. < r && b/2. > 0. && b/2. < r ){
		if (isenable ( (a/2.)*(a/2.) + (b/2.)*(b/2. ), r*r ) ){
			return true;
		} // end if
	} // end if

	return false;
}
 
int main()
{
//	cut here before submit 
//	freopen("testcase.carrycheese", "r", stdin);
	string str = "";
	vector <double> s(3, 0.0 );
	int i;

	while (getline (cin, str ) ){
		stringstream sss(str);
	
		for (i = 0; i < 3; ++i){
			sss >> s[i];
		} // end for
		if (s[0] == 0. && s[1] == 0. && s[2] == 0. ) {
			break;
		} // end if

		sort (s.begin(), s.end() );

		int n;		
		getline (cin, str );
		stringstream ssn(str);
		ssn >> n;

		for (i = 0; i < n; ++i ){
			double r = 0.0;
			getline (cin, str );
			stringstream ssr(str);
			ssr >> r;

			if (estimate (s[0], s[1], r ) ){
				cout << "OK" << endl;
			}else{
				cout << "NA" << endl;
			} // end if
		} // end for
	} // end loop

//	cout << res << endl;	
		
	return 0;
}
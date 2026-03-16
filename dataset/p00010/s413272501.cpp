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
//	freopen("testcase.cct", "r", stdin);
	string str = "";
	string res = "";
	int n;

	getline (cin, str );
	stringstream ssn(str);
	ssn >> n;

	int i,j;
	for (i = 0; i < n; ++i){
		getline (cin, str );
		stringstream ss(str);
		vector <double> X(3, 0.);
		vector <double> Y(3, 0.);
		for (j = 0; j < 3; ++j){
			double x, y;
			ss >> x >> y;
//			cout << '(' << x << ',' << y << ')' << endl;
			X[j] = x; Y[j] = y;
		} // end for
		vector <double> mx(3, 0.);
		vector <double> my(3, 0.);

		for (j = 0; j < 3; ++j){
			mx[j] = (X[j] + X[(j+1) % 3])/2.;
			my[j] = (Y[j] + Y[(j+1) % 3])/2.;
//			cout << '(' << mx[j]<< ',' << my[j] << ')' << endl;
		} // end for
		vector <double> a(3, 0.);
		vector <double> b(3, 0.);
		vector <double> c(3, 0.);

		for (j = 0; j < 3; ++j){
			if (X[(j+1) % 3] == X[j]){
				a[j] = 0.0;
				b[j] = 1.0;
				c[j] = -my[j];
			}else if (Y[(j+1) % 3] == Y[j]){
				a[j] = 1.0;
				b[j] = 0.0;
				c[j] = -mx[j];
			}else{
				a[j] = (X[(j+1) % 3] - X[j]);
				b[j] = (Y[(j+1) % 3] - Y[j]);
 				c[j] = -a[j]*mx[j] - b[j]*my[j];
			} // end if
		} // end for
		vector <double> cx (3, X[0]);
		vector <double> cy (3, Y[0]);
		set <double> Cx, Cy;
		for (j = 0; j < 3; ++j){
			//cout << a[j] << ' ' << b[j] << ' ' << c[j] << endl;
			if (a[j] == 0. && b[j] != 0.) {
				cy[j] = -c[j]/b[j];
			}else if (a[(j+1) % 3] == 0. && b[(j+1) % 3] != 0.){
				cy[j] = -c[(j+1) % 3]/b[(j+1) % 3];
			} // end if
			if (a[j] != 0. && b[j] == 0.){
				cx[j] = -c[j]/a[j];
			}else if (a[(j+1) % 3] != 0. && b[(j+1) % 3] == 0.){
				cx[j] = -c[(j+1) % 3]/a[(j+1) % 3];
			} // end if
			if (cx[j] == X[0] || cy[j] == Y[0] ){
				double D = a[j]*b[(j+1) % 3] - b[j]*a[(j+1) % 3];
				if (cx[j] == X[0]){
					cx[j] = ( -b[(j+1) % 3]*c[j] + b[j]*c[(j+1) % 3])/D;
				} // end if
				if (cy[j] == Y[0]){
					cy[j] = (  a[(j+1) % 3]*c[j] - a[j]*c[(j+1) % 3])/D;
				} // end if
			} // end if
			Cx.insert (cx[j]);
			Cy.insert (cy[j]);
	//		cout << '(' << cx[j] << ',' << cy[j] << ')' << endl;	
		} // end for
		double CX = *(Cx.begin() );
		double CY = *(Cy.begin() );
		double R = sqrt( (CX - X[0])*(CX - X[0]) + (CY - Y[0])*(CY - Y[0]) );

		cout.setf( ios::fixed ); 
		cout.precision(3);
		cout <<  CX << ' ' << CY << ' ' << R << endl;
 	} // end for

		
	return 0;
}
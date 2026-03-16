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
#include <complex>

using namespace std;

// deq notes ツ閉スツ姪環甘エツ可スツづ可つィツつッツづゥツベツクツトツδ仰可可算 http://www.deqnotes.net/acmicpc/2d_geometry/

typedef complex<double> P;
#define EPS (1e-10)
#define EQ(a,b) (abs((a)-(b)) < EPS)


double helon (double a, double b, double c )
{
//	cout << "a: " << a << " b: " << b << " c: " << c << endl;

	double z = (a + b + c)/2.;

//	cout << "z: " << z << endl;

	double S = sqrt( z*(z - a)*(z - b)*(z - c) );

//	cout << "S: " << S << endl;

	return S;
}

int main()
{
//	cut here before submit 
//	freopen("testcase.aop", "r", stdin);
	string str = "";
	vector <double> px, py;

	while (getline (cin, str ) ){
		while (str.find(',') != string::npos ){
			str = str.replace(str.find(','), 1, " ");
		} // end while
		double x, y;
		stringstream ss(str);
		ss >> x >> y;
		px.push_back(x); py.push_back(y);
	} // end loop
	int size = px.size();
	P v[size];	
	int i;

	for (i = 0; i < size; ++i){
		v[i].real() = px[(i+1) % size] - px[0];
		v[i].imag() = py[(i+1) % size] - py[0];
//		cout << '(' << v[i].real() << ',' << v[i].imag() << ')' << endl;
	} // end for

	double res = 0.;
	for (i = 0; i < size - 2; ++i){
		res += helon (abs(v[i]), abs(v[i+1]), abs (v[i+1] - v[i]) );
	} // end for
	cout << res << endl;	
		
	return 0;
}
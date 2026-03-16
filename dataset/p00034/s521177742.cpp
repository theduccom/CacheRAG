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
//	freopen("testcase.rl", "r", stdin);
	string str = "";
	
	while (getline (cin, str ) ){
		if (str.empty() ){
			break;
		} // end if

		vector <double> Area(11, 0. );
		vector <double> Sum (11, 0.);
		int i;

		while (str.find(',') != string::npos ){
			str = str.replace(str.find(','), 1, " ");
		} // end while

		stringstream ss(str);

		Area[0] = 0.;

		for (i = 1; i <= 10; ++i){
			ss >> Area[i];
		} // end for

		for (i = 0; i <= 10; ++i){
			Sum[i] = accumulate (Area.begin(), Area.begin()+i+1, 0.);
//			cout << "Sum[" << i << "]: " << Sum[i] << endl;
		} // end for
		
		double v1 = 0., v2 = 0.;
		ss >> v1;
		ss >> v2;
		double L = v1*Sum[10]/(v1 + v2);

		for (i = 1; i <= 10; ++i){
			if (Sum[i-1] < L && L <= Sum[i]){
				cout << i << endl;
				break;
			} // end if
		} // end for
	} // end while

	return 0;
}
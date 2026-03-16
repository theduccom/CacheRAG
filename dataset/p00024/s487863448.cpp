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
//	freopen("testcase.dat", "r", stdin);
	string str = "";

	while (getline (cin, str ) ){
		int res = 0;
		double vb;		
		stringstream ss(str);
		ss >> vb;
		int n;

		for (n = 1;; ++n){
			int h = 5*n - 5;
			double tt = (double)h/4.9;
			double t = sqrt(tt);
			double v = 9.8*t;
//			cout << "v: " << v << endl;
			if (v < vb){
				continue;
			}else{
				res = n;
				break;
			} // end if
		} // end for

		cout << res << endl;
	} // end for

	return 0;
}
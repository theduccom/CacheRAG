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
//	freopen("testcase.pym", "r", stdin);
	string str = "";
	int n;
	int count = 0;
	int x, h;

	while (getline (cin, str ) ){
		stringstream ss(str);
		ss >> n;

		if (count % 2 == 0 ){
			x = n;
			++count;
			continue;
		} // end if

		if (count % 2 != 0 ){
			h = n;
			++count;		
		} // end if
		
		if (x == 0 && h == 0){
			break;
		}else{
			//cout << "x: " << x << " h: " << h << endl;
			if (x == 0 || h == 0){
				cout << '0' << endl;
			}else{
				double m = (double)x/2.*(double)x/2.;
					m += (double)(h*h);
				double s  = sqrt (m);
				double res = x*(x+2*s);
				printf ("%.9f\n", res );
			} // end if
		} // end if
	} // end loop

		
	return 0;
}
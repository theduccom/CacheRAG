#include <iostream>
#include <cmath>
//#include <fstream>

using namespace std;

int main()
{
//	cut here before submit 
//	freopen("testcase.dat", "r", stdin);
	double vb;		

	while (cin >> vb ){
		int res = 0;

		for (int n = 1;; ++n ){
			int h = 5*n - 5;
			double tt = (double)h/4.9;
			double t = sqrt(tt );
			double v = 9.8*t;
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
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
#include <array>
#include <stack>
#include <queue>
#include <chrono>
#include <numeric>
#include <memory.h>
#include <map>
#include <math.h>
#include <utility>


#pragma warning(disable:4996)
using namespace std;
#define REP(i,n) for(int i = 0 ; i < n ; ++i)
typedef long long Int;
const double PI = 3.141592653589793238;
const Int INF = 999999999999;
typedef pair<int, int> P;


int main()
{
	int n;
	cin >> n;
	REP(i, n){
		double x1, x2, x3, y1, y2, y3;
		cin >> x1>> y1 >> x2 >> y2 >> x3 >> y3;

		double x21 = x2 - x1;
		double x31 = x3 - x1;
		double y21 = y2 - y1;
		double y31 = y3 - y1;
		/*
		double xc = 1.0*((y31*(x21*x21 + y21*y21)) - (y21*(x31*x31 + y31*y31))) /
			(2 * (x21*y31 - y21*x31));

		double yc = 1.0*((x21*(x31*x31 + y31*y31)) - (x31*(x21*x21 + y21*y21))) /
			(2 * (x21*y31 - y21*x31));	
		*/

		double xc = ((y1 - y3)*(y1*y1 - y2*y2 + x1*x1 - x2*x2) - (y1 - y2)*(y1*y1 - y3*y3 + x1*x1 - x3*x3)) / (2 * (y1 - y3)*(x1 - x2) - 2 * (y1 - y2)*(x1 - x3));

		double yc = ((x1 - x3)*(x1 *x1 - x2 *x2 + y1 *y1 - y2 *y2) - (x1 - x2)*(x1*x1  - x3 *x3 + y1 *y1 - y3 *y3) ) / (2*(x1 - x3)*(y1 - y2) - 2*(x1 - x2)*(y1 - y3));

		double d = (xc - x1)*(xc - x1) + (yc - y1)*(yc - y1);
		d = sqrt(d);

		printf("%.3lf %.3lf %.3lf\n", xc, yc, d);
	}
	return 0;
}
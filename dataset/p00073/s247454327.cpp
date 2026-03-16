#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <algorithm>
#include <math.h>
//#include <map>
#include <iomanip>
#include <vector>

using namespace std;



int main()
{
	double x, h, ans;
	
	cout << fixed << setprecision(6);
	while (cin >> x >> h)
	{
		if (x == 0 && h == 0) break;
		ans = 2*x*sqrt(h*h+x*x/4) + x*x;
		cout << ans << endl;
	}
	
	return 0;
}
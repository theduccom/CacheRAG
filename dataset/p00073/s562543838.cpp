#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int x, h;
	while (true) {
		cin >> x >> h;
		if (x==0 && h==0) break;
		
		double surface_area = static_cast<double>(x*x) + 2.0 * static_cast<double>(x) * sqrt(static_cast<double>(h*h+x*x/4.0));
		cout << fixed << setprecision(6) << surface_area << endl;
	}
	
	return 0;
}
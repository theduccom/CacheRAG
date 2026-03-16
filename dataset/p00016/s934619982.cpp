#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159;

int main()
{
	double x=0.0, y=0.0;
	int deg = 0;
	int d, t;
	char dummy;
	
	while (true) {
		cin >> d >> dummy >> t;
		if (d==0 && t==0) break;
		
		x += static_cast<double>(d) * sin(static_cast<double>(deg)*PI/180);
		y += static_cast<double>(d) * cos(static_cast<double>(deg)*PI/180);
		deg += t;
	}
	
	cout << static_cast<int>(x) << endl << static_cast<int>(y) << endl;
	
	return 0;
}
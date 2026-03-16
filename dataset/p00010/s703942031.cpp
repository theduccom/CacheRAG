#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>
#include <math.h>
#include <limits>
#include <chrono>

using namespace std;

class circleOfATriangle
{
public:
	void calc(double,double,double,double,double,double);
};

void circleOfATriangle::calc(double x1, double y1, double x2, double y2, double x3, double y3)
{
	double a2 = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3);
	double b2 = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
	double c2 = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
	double area = ((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1)) / 2.0;

	double px = (a2*(b2 + c2 - a2)*x1 + b2*(c2 + a2 - b2)*x2 + c2*(a2 + b2 - c2)*x3) / (16 * area*area);
	double py = (a2*(b2 + c2 - a2)*y1 + b2*(c2 + a2 - b2)*y2 + c2*(a2 + b2 - c2)*y3) / (16 * area*area);
	double r = sqrt((x1 - px)*(x1 - px) + (y1 - py)*(y1 - py));
	
	cout << fixed << setprecision(3) << px << " " << py << " " << r << "\n";
}

int main()
{
	circleOfATriangle ct;
	int n;
	double x1, y1, x2, y2, x3, y3;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		ct.calc(x1,y1,x2,y2,x3,y3);
	}

	return 0;
}
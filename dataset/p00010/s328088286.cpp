#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void OutputCentralCoodinateAndRadius(double x1, double y1, double x2, double y2, double x3, double y3)
{
	double x, y, r;
	if(y1 == y2 || y2 == y3 || y3 == y1){
		if(y2 == y3){
			swap(x3, x1);
			swap(y3, y1);
		}else if(y3 == y1){
			swap(x2, x3);
			swap(y2, y3);
		}
		double xa = (x2 + x3) / 2;
		double ya = (y2 + y3) / 2;
		double a  = (-x3 + x2) / (y3 - y2);
		x = (x1 + x2) / 2;
		y = a * (x - xa) + ya;
	}else{
		double xa = (x1 + x2) / 2;
		double ya = (y1 + y2) / 2;
		double a  = (-x2 + x1) / (y2 - y1);
		double xb = (x2 + x3) / 2;
		double yb = (y2 + y3) / 2;
		double b  = (-x3 + x2) / (y3 - y2);
		x = (b * xb - a * xa - yb + ya) / (b - a);
		y = a * (x - xa) + ya;
	}
	r = sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
	cout << fixed << setprecision(3) << x << ' ' << y << ' ' << r << endl;
}

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		double x1, y1, x2, y2, x3, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		OutputCentralCoodinateAndRadius(x1, y1, x2, y2, x3, y3);
	}
	return 0;
}
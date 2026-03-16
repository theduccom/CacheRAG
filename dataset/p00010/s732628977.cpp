#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double sisya(double x)
{
	int a = static_cast<int>(x * 10000);
	x = static_cast<double>(static_cast<int>(x * 1000)) / 1000;
	if(a < 0 && a%10 <= -5)
		return x-0.001;
	else if(a%10 >= 5)
		return x+0.001;
	return x;
}

int main()
{
	int n;
	double x1,x2,x3,y1,y2,y3;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		double px = ((y1-y2)*(x3*x3+y3*y3-x1*x1-y1*y1)-(y1-y3)*(x2*x2+y2*y2-x1*x1-y1*y1))/(2*((y1-y3)*(x1-x2)-(y1-y2)*(x1-x3)));
		double py = ((x1-x2)*(x3*x3+y3*y3-x1*x1-y1*y1)-(x1-x3)*(x2*x2+y2*y2-x1*x1-y1*y1))/(2*((y1-y2)*(x1-x3)-(y1-y3)*(x1-x2)));
		double r  = sqrt((px-x1)*(px-x1)+(py-y1)*(py-y1));
		cout << setprecision(3) << fixed << sisya(px) << " " << setprecision(3) << fixed << sisya(py) << " " << setprecision(3) << fixed << sisya(r) <<endl;
	}
	return 0;
}
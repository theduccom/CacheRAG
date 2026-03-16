// 2014/07/14 Tazoe

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for(int i=0; i<n; i++){
		double x1, y1, x2, y2, x3, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

		double a1 = 2*(x2-x1);
		double b1 = 2*(y2-y1);
		double c1 = x1*x1-x2*x2+y1*y1-y2*y2;

		double a2 = 2*(x3-x1);
		double b2 = 2*(y3-y1);
		double c2 = x1*x1-x3*x3+y1*y1-y3*y3;

		double px = (b1*c2-b2*c1)/(a1*b2-a2*b1);
		double py = (c1*a2-c2*a1)/(a1*b2-a2*b1);

		double r = sqrt((px-x1)*(px-x1)+(py-y1)*(py-y1));

		cout.precision(3);
		cout << fixed << px << ' ' << fixed << py << ' ' << fixed << r << endl;
	}

	return 0;
}
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	
	while(n-- > 0){
	
	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	
	double a = 2 * (x2 - x1);
	double b = 2 * (y2 - y1);
	double c = x1 * x1 - x2 * x2 + y1 * y1 - y2 * y2;
	double d = 2 * (x3 - x2);
	double e = 2 * (y3 - y2);
	double f = x2 * x2 - x3 * x3 + y2 * y2 - y3 * y3;
		
	double cx = (b * f - c * e)/(a * e - d * b);
	double cy = (a * f - c * d)/(b * d - a * e);
		
	double r = sqrt((x1 - cx)*(x1 - cx) + (y1 - cy)*(y1 - cy));
	
	cout << fixed << setprecision(3) << cx << " " << cy << " " << r << endl;
	
	}
	
	return 0;
}
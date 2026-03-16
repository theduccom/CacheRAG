#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		double x1,x2,x3,y1,y2,y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		double c1 = 2.0*(x1-x2);
		double c2 = 2.0*(y1-y2);
		double c3 = 2.0*(x1-x3);
		double c4 = 2.0*(y1-y3);
		double c5 = x1*x1 + y1*y1;
		double c6 = x2*x2 + y2*y2;
		double c7 = x3*x3 + y3*y3;
		double px = (c4*(c5-c6)-c2*(c5-c7))/(c1*c4-c2*c3);
		double py;
		if(c2!=0.0) py = (c5-c6-c1*px)/c2;
		else py = (c5-c7-c3*px)/c4;
		double r = sqrt((px-x1)*(px-x1)+(py-y1)*(py-y1));
		cout << fixed << setprecision(3) << px << " " << py << " " << r << endl;
	}
}
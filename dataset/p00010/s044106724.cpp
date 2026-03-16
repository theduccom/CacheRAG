#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
using namespace std;

int main(){
	int n; cin >> n;
	while(n--){
	double x[3] = {};
	double y[3] = {};

	for(int i=0; i<3; i++)
		cin >> x[i] >> y[i];

	double a,b,c,d,e,f;
	a = x[1] - x[0];
	b = y[1] - y[0];
	c = x[2] - x[0];
	d = y[2] - y[0];
	e = (-pow(x[0],2.0)+pow(x[1],2.0)-pow(y[0],2.0)+pow(y[1],2.0))/2;
	f = (-pow(x[0],2.0)+pow(x[2],2.0)-pow(y[0],2.0)+pow(y[2],2.0))/2;

	double Xo = (d*e-b*f)/(a*d-b*c);
	double Yo;
	if(b != 0)
		Yo=(e-a*Xo)/b;
	else
		Yo=(f-c*Xo)/d;

	cout << fixed;
	cout << setprecision(3) << Xo << " " << Yo << " " << sqrt(pow(Xo-x[0],2.0)+pow(Yo-y[0],2.0)) << endl;
	}
	return 0;
}

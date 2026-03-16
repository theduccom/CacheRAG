#include <iostream>
#include <iomanip>
#include <math.h>
#include <utility>
#include <cstdlib>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n){
		double x[3],y[3];
		cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2];

		double  a[2],b[2],c[2];
		for(int i=0;i<2;i++){
			a[i] = 2*(x[i]-x[i+1]);
			b[i] = 2*(y[i]-y[i+1]);
			c[i] = x[i]*x[i]-x[i+1]*x[i+1]+y[i]*y[i]-y[i+1]*y[i+1];
		}
		double ansx,ansy,r;
		ansx = (c[0]*b[1]-c[1]*b[0])/(a[0]*b[1]-a[1]*b[0]);
		ansy = (a[1]*c[0]-a[0]*c[1])/(a[1]*b[0]-a[0]*b[1]);
		r = hypot(x[0]-ansx,y[0]-ansy);
		cout << fixed << setprecision(3) <<  ansx << " " << ansy << " " << r <<  endl;
		n--;
	}
	return 0;
}
#include <iostream>
#include <cmath>
#include <cstdio>
#include <complex>
using namespace std;
typedef complex<double > P;

P getCircumcenter(P a,P b,P c){
	double A1 = 2 * ( b.real() - a.real() );
	double B1 = 2 * ( b.imag() - a.imag() );
	double C1 = pow(a.real(),2)-pow(b.real(),2) + pow(a.imag(),2)-pow(b.imag(),2);
	double A2 = 2 * ( c.real() - a.real() );
	double B2 = 2 * ( c.imag() - a.imag() );
	double C2 = pow(a.real(),2)-pow(c.real(),2) + pow(a.imag(),2)-pow(c.imag(),2);
	double X = (B1 * C2 - B2 * C1) / (A1 * B2 - A2 * B1);
	double Y = (C1 * A2 - C2 * A1) / (A1 * B2 - A2 * B1);
	return P(X,Y);
}
int main(){
	int n;
	cin >> n;
	P a,b,c;
	while(n--){
		cin >> a.real() >> a.imag() >> b.real() >> b.imag() >> c.real() >> c.imag();
		P ans = getCircumcenter(a,b,c);
		printf("%.3f %.3f %.3f\n",ans.real(),ans.imag(),abs(ans-a));
	}
}
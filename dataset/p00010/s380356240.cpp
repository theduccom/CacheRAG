#include <iostream>
#include <algorithm>
#include <cmath>
#include <complex>
#include <cstdio>

using namespace std;

int main(){

	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		complex<double> A,B,C;
		cin >> A.real() >> A.imag() >> B.real() >> B.imag() >> C.real() >> C.imag();
		double b = abs(A-C);
		double a = abs(B-C);
		double c = abs(A-B);
		double s = (a+b+c)/2;
		double S = sqrt(s*(s-a)*(s-b)*(s-c));
		double R = a*b*c/(4*S);
		complex<double> cent;

		cent.real() = (a*a*(b*b+c*c-a*a)*A.real() + b*b*(a*a+c*c-b*b)*B.real() + c*c*(b*b+a*a-c*c)*C.real())/(16*S*S);
		cent.imag() = (a*a*(b*b+c*c-a*a)*A.imag() + b*b*(a*a+c*c-b*b)*B.imag() + c*c*(b*b+a*a-c*c)*C.imag())/(16*S*S);

		printf("%.3f %.3f %.3f\n",cent.real(),cent.imag(),R);
		//cout << cent.real() << " " << cent.imag() << " " << R << endl;
		//double cosA = (b*b+c*c-a*a)/(2*b*c);
		//double sinA = sqrt(1-cosA*cosA);
		//double R = a/(2*sinA);

	}

	return 0;
}
#include <iostream>
#include <complex>
#include <cmath>
#include <stdio.h>

using namespace std;
typedef complex<double> xy_t;
xy_t P[110];
int main() {
	int N=0;
	double x,y;
	while (scanf("%lf,%lf", &x, &y) != EOF){
		P[N++] = xy_t(x,y);
	}
	double sum=0.0;
	for (int i=0; i+2<N; i++){
		xy_t a=P[0], b=P[i+1], c=P[i+2];
		xy_t vec1 = b-a, vec2 = c-a;
		sum += ((conj(vec1)*vec2).imag()) / 2;
	}
	printf("%.6f\n", abs(sum));
}
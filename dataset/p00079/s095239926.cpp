#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <cstdlib>
#include <queue>
#include <vector>
#include <set>
#include <stdio.h>
#include <cstdio>
#include <cmath>
#include <complex> 
using namespace std;
typedef complex<double> xy_t;
xy_t P[30];
int N=0;
double x,y;
int main() {
double s =0.0;
while (scanf("%lf,%lf", &x,&y) != EOF) {
	P[N] = xy_t(x,y);
	N += 1;
}
for ( int i = 0; i+2 < N;i++ ){
	xy_t a = P[i+1] - P[0], b = P[i+2]-P[0];
	s += - (a.real()*b.imag()-a.imag()*b.real())/2;
}
printf("%.6f\n", abs(s));
}
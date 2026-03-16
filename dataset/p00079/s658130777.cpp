#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<stack>
#include<queue>
#include<complex>
#include<cmath>
using namespace std;
typedef complex<double> comp;

double crs_prod(comp a, comp b) { return (conj(a)*b).imag(); }

double c1, c2;
double area = 0;
comp z[20];
int n = 0;
int main(){
	while(~scanf("%lf,%lf", &c1, &c2)){
		z[n] = comp(c1, c2);
		n++;
	}
	for(int i=1; i<n-1; i++){
		area += crs_prod(z[i]-z[0], z[i+1]-z[0])/2;
	}
	printf("%f",area>0 ? area : -area);
	return 0;
}
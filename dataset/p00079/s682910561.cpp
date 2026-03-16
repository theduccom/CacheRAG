#include <cmath>
#include <cstdio>

using namespace std;

int main() {

	int n=0;
	double S=0, x[20], y[20];

	while(scanf("%lf, %lf", &x[n], &y[n])!=EOF) {
		n++;
	}
	for(int i=1; i<n-1; i++) {
		double a=sqrt(pow(x[0]-x[i], 2)+pow(y[0]-y[i], 2));
		double b=sqrt(pow(x[i]-x[i+1], 2)+pow(y[i]-y[i+1], 2));
		double c=sqrt(pow(x[i+1]-x[0], 2)+pow(y[i+1]-y[0], 2));
		double z=(a+b+c)/2;
		S+=sqrt(z*(z-a)*(z-b)*(z-c));
	}

	printf("%.6f\n", S);

	return 0;

}
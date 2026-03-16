#include<cstdio>

int n;
double x[21],y[21];

double fabs(double x){
	if(x<0)return -x;
	return x;
}

int main(void){
	while(~scanf("%lf,%lf",&x[n],&y[n]))n++;
	double sum=0.0;
	for(int i=0;i<n;i++)sum+=0.5*(x[i]-x[(i+1)%n])*(y[i]+y[(i+1)%n]);
	printf("%0.7f\n",fabs(sum));
	return 0;
}
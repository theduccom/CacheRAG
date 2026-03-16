#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main() {
	
	int n=0;
	double x[20],y[20],s=0;
	
	
	while(scanf("%lf,%lf",&x[n],&y[n])+1)
		++n;
	
	for(int i=0;i<n;++i){
		s += x[i]*y[(i+1)%n] - y[i]*x[(i+1)%n];
	}
	s/=2;
	
	cout<<setprecision(20)<<(s>0?s:-s)<<endl;
	return 0;
}
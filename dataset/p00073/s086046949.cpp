#include <iostream>
#include <math.h>
#include <stdio.h>
#include <cstdio>
using namespace std;
int main(){
	int x,h;
	while(1){
		cin>>x;
		cin>>h;
		if(x==0 && h==0) break;
		double s=(double)(x*x)+(double)x*(sqrt((double)(x*x)+4.0*(double)(h*h)));
		printf("%.6lf\n",s);
	}
	return 0;
}
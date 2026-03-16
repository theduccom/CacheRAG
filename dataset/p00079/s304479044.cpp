#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <vector>
#include <math.h>
using namespace std;
double helon(double x1,double y1,double x2,double y2,double x3,double y3){
	double a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	double b=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	double c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	double z=(a+b+c)/2.0;
	double s=sqrt(z*(z-a)*(z-b)*(z-c));
	return s;
}
int main(){
	vector<double> x,y;
	double a,b,s,sum=0;
	while(scanf("%lf,%lf",&a,&b)!=EOF){
		x.push_back(a);
		y.push_back(b);
	}
	for(int i=1;i<x.size()-1;i++){
		s=helon(x[0],y[0],x[i],y[i],x[i+1],y[i+1]);
		sum+=s;
	}
	printf("%.6lf\n",sum);
	return 0;
}
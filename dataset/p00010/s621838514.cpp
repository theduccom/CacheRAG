#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
	
	int n;
	double x1,y1,x2,y2,x3,y3;
	
	cin>>n;
	while(n>0){
		double px,py,r;
		double A,B,C,a,b,c;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		A=2*(x2-x1);
		B=2*(y2-y1);
		C=(pow(x1,2)-pow(x2,2))+(pow(y1,2)-pow(y2,2));
		a=2*(x3-x1);
		b=2*(y3-y1);
		c=(pow(x1,2)-pow(x3,2))+(pow(y1,2)-pow(y3,2));
		
		px=(B*c-b*C)/(A*b-a*B);
		py=(C*a-c*A)/(A*b-a*B);
		r=sqrt(pow(x1-px,2)+pow(y1-py,2));
				
		printf("%.3f %.3f %.3f\n",px,py,r);
		n--;
		
	}
}
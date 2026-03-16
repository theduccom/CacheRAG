#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;

int main(){
	double a,b,c;
	double x,y;
	double s;
	while(cin>>x>>y,y!=0){
	a=x/2;
	b=y;
	c=sqrt(a*a+b*b);
	s=x*x+4*x*c/2;
	printf("%.9f\n",s);
	}
	

}
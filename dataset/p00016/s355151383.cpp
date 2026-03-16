#include<iostream>
#define _USE_MATH_DEFINES
#include<math.h>
#include<cstdio>
using namespace std;

int main(){
	
	double x=0,y=0;
	double a,b,t=90;
	char cn;
	while(cin>>a>>cn>>b){
	if(a!=b!=0){
		double s=t*M_PI/180;
		x+=a*cos(s);
		y+=a*sin(s);
		t=t-b;
		
	}
	else
		break;
	}
	printf("%d\n%d\n",(int)x,(int)y);
		
	
}
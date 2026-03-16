#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

struct rec{
	double x,y;
};

int main(){
	
	int n;
	struct rec dot[21]={0};
	double ans=0,a,b,c,z;
	
	for(int i=0;i<20;i++){
		if(scanf("%lf,%lf",&dot[i].x,&dot[i].y)==EOF){
			n=i;
			break;
		}
	}
	
	for(int i=0;i<n-2;i++){
		a=sqrt(pow(dot[0].x-dot[i+1].x,2)+pow(dot[0].y-dot[i+1].y,2));
		b=sqrt(pow(dot[i+1].x-dot[i+2].x,2)+pow(dot[i+1].y-dot[i+2].y,2));
		c=sqrt(pow(dot[i+2].x-dot[0].x,2)+pow(dot[i+2].y-dot[0].y,2));
		
		z=(a+b+c)/2;
		
		ans=ans+sqrt(z*(z-a)*(z-b)*(z-c));
	}
	
	printf("%.6lf\n",ans);
	
	return 0;
}
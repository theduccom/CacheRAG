#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	int n;
	double xa,ya,ra,xb,yb,rb;
	double d;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lf %lf %lf %lf %lf %lf",&xa,&ya,&ra,&xb,&yb,&rb);
		d = ((xa-xb)*(xa-xb))+((ya-yb)*(ya-yb));
		if(sqrt(d)+rb<ra)
		printf("2\n");
		else if(sqrt(d)+ra<rb)
		printf("-2\n");
		else if(sqrt(d)<=ra+rb)
		printf("1\n");
		else
		printf("0\n");
	}
}
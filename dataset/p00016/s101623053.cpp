#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
double toRad(int deg){
	return deg/180.0*M_PI;
}
main(){
	double x=0,y=0;
	int len,deg=90;
	double rad=toRad(deg);
	while(1){
		int tdeg;
		scanf("%d,%d",&len,&tdeg);
		if(len==tdeg && len==0){
			break;
		}
		double tx=len*cos(rad);
		double ty=len*sin(rad);
		x+=tx;
		y+=ty;
		deg-=tdeg;
		rad=toRad(deg);
	}
	cout<<(int)x<<endl<<(int)y<<endl;
}
#include<stdio.h>
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
double goa(double xh,double yh,double xc,double yc){
double X=xc-xh;double Y=yc-yh;double a;
a=sqrt((xc-xh)*(xc-xh)+(yc-yh)*(yc-yh));
return a;
}
double mense(double a,double b,double c){
double z;double S;
z=(a+b+c)*0.5;
S=sqrt(z*(z-a)*(z-b)*(z-c));
return S;
}

int main(){
double x,y,xh,yh,xc,yc,a=0,b=0,c=0,d=0,S=0,s=0;
//cin>>xh>>yh;
//cin>>xc>>yc;
scanf("%lf,%lf",&xh,&yh);
scanf("%lf,%lf",&xc,&yc);
scanf("%lf,%lf",&x,&y);

//cin>>x>>y;
a=goa(xh,yh,xc,yc);
b=goa(xc,yc,x,y);
c=goa(xh,yh,x,y);
S+=mense(a,b,c);
//cout<<a<<" "<<b<<" "<<c<<endl;
xc=x;yc=y;
while(scanf("%lf,%lf",&x,&y)!=EOF){
	a=goa(xh,yh,xc,yc);
b=goa(xc,yc,x,y);
c=goa(xh,yh,x,y);
S+=mense(a,b,c);
xc=x;yc=y;
	
	/*
goa(xh,yh,x,y,a);
goa(xc,yc,x,y,b);
goa(xh,yh,x,y,c);
S+=mense(a,b,c);
xc=x;yc=y;
*/
}
printf("%lf\n",S);
return 0;
}
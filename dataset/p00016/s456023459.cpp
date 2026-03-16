#include<iostream>
#include<algorithm>
#include<math.h>
#define P 3.141592653589793
using namespace std;

double Y(int z){
	if(z==0||z==180)return 0.0;
	if(z<180)return sin(P/180*z);
	return -sin(P/180*(360-z));
}
double X(int z){
	if(z==90||z==270)return 0.0;
	if(z<180)return cos(P/180*z);
	return cos(P/180*(360-z));
}
int main(){
	double x=0,y=0;
	int z=90,a,b;char u;
	while(cin>>a>>u>>b&&a+b){
		y+=a*Y(z),x+=a*X(z);
		z-=b;z%=360;if(z<0)z+=360;
	}
	int xx=x,yy=y;
	cout<<xx<<endl;
	cout<<yy<<endl;
	return 0;
}
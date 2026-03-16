#include<iostream>
#include<cmath>
#define PI 3.141592653589793
using namespace std;
int main(){
	char z;
	int a;
	double b;
	int i,j,k;
	double x=0,y=0;
	double d=0;
	while(cin>>a>>z>>b){
		if(a==0)break;
		x+=(double)a*cos(d/180.0*PI);
		y+=(double)a*sin(d/180.0*PI);
		d+=b;
	}
	cout<<(int)y<<endl;
	cout<<(int)x<<endl;
	return 0;
}
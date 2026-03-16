#include <cmath>
#include <iostream>
#include <cstdio>
#define PI 3.1415926535897932
using namespace std;

int main(void){
	int deg=0;
	int a,b;
	double x,y;

	while(scanf("%d,%d",&a,&b),a||b){
		x+=a*cos((double)deg/180.0*PI);
		y+=a*sin((double)deg/180.0*PI);
		deg+=b;
	}
	cout<<(int)y<<endl<<(int)x<<endl;
	return 0;
}
#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	int d,a;
	double b=90,x=0,y=0;
	while(scanf("%d,%d",&d,&a),d||a){
		x+=d*cos(b/180*acos(-1.0));y+=d*sin(b/180*acos(-1.0));
		b-=a;
	}
	cout<<(int)x<<endl<<(int)y<<endl;
}
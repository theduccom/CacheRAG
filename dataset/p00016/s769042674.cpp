#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	int d,a,dir=0;
	double x=0,y=0;
	double rad;
	while(scanf("%d,%d",&d,&a)){
		if(d==0&&a==0)
		break;
		rad = dir*(M_PI/180);
		x+=d*sin(rad);
		y+=d*cos(rad);
		dir+=a;
	}
	printf("%d\n%d\n",(int)x,(int)y);
}
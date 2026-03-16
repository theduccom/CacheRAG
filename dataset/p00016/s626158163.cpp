#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int w,angle;
	double x=0.0,y=0.0, prev_angle=90.0;
	while( (scanf("%d,%d",&w,&angle)) != EOF){
		if(w==0 && angle==0) break;
		double radian_angle = prev_angle * M_PI / 180.0;
		x += w*cos(radian_angle);
		y += w*sin(radian_angle);
		
		prev_angle -= (double)angle;
	}
	printf("%d\n%d\n",(int)x,(int)y);
	return 0;
}
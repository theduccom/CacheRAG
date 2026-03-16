#include<iostream>
#include<cmath>

#define PIE 3.14159265358979323846264 
#define ANG PIE/180.0	//RADツづ可陛渉環キ

using namespace std;

int main(void){

	double x,y,angle,step,dir;
	
	x=y=angle=0.0;
	
	while(1){
		
		scanf("%lf,%lf",&step,&dir);
		if(step==0&&dir==0){
			break;
		}
		
		x=x+step*sin(angle*ANG);
		y=y+step*cos(angle*ANG);
		
		angle=angle+dir;
	}	
	
	cout<<(int)x<<endl<<(int)y<<endl;

	return 0;
}
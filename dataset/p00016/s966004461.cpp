#include<cmath>
#include<cstdio>
using namespace std;
#define PI 3.1415926535898
int main(){
	double x = 0,y = 0,dis,ang,angnow = 90;
	for(;;){
		scanf("%lf,%lf",&dis,&ang);
		if(dis == 0 && ang == 0){break;}
		x+=dis*cos(angnow*PI/180);
		y+=dis*sin(angnow*PI/180);
		angnow-=ang;
	}
	x = (int)x/1;
	y = (int)y/1;
	printf("%.0lf\n%.0lf\n",x,y);
	return 0;
}
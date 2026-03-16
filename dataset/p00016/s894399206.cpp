#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	int r, d, sd=90;
	double x=0.0, y=0.0;
	while( scanf("%d,%d",&r,&d)==2 && !(r==0 && d==0) ){
		x += r * cos(sd*3.141592/180.0);
		y += r * sin(sd*3.141592/180.0);
		sd -= d;
		if( sd>180 )			sd -= 360;
		else if( sd<-180 )	sd += 360;
	}
	printf("%d\n%d\n", (int)x, (int)y);
	return 0;
}
#include<stdio.h>
int main(){
	double v=0.0,t=0.0,y=0.0;
	
	while(scanf("%lf",&v)!=EOF){
	t=v/9.8;
	y=4.9*t*t;
	printf("%.0f\n",(y/5+1)+0.5);
	}
return 0;
}
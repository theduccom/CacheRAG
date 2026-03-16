#include<stdio.h>
#include<math.h>
#define pi 3.14159265358979

int main(){
	double teku[10000]={0.0},sita=pi/2,set_sita[10000]={0.0},x=0.0,y=0.0;
	int i=0;
	
	while(scanf("%lf,%lf",&teku[i],&set_sita[i])!=EOF){
		if(teku[i]==0 && set_sita[i]==0)break;
		
		set_sita[i]=set_sita[i]/180.0 * pi;
		
		x+=teku[i]*cos(sita);
		y+=teku[i]*sin(sita);
		sita-=set_sita[i];
		i++;
	}
	if(x>0)x=floor(x);
	else x=ceil(x);
	
	if(y>0)y=floor(y);
	else y=ceil(y);
	
		printf("%.0f\n%.0f\n",floor(x),floor(y));
	return 0;
}
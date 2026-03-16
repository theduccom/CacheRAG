#include<stdio.h>
#include<math.h>

int main(void){
	int x,h;
	double s,t_h;
	while(0==0){
		scanf("%d",&x);
		scanf("%d",&h);
		if(x==0 && h==0)break;
		t_h=sqrt(h*h+((double)x*(double)x)/4);
		s=(double)x*(double)x+(double)x*t_h*2.0;
		printf("%f\n",s);
	}
	return 0;
}
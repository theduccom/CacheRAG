#include<stdio.h>
#include<math.h>

int main(){
	double x,h;
	while(~scanf("%lf%lf",&x,&h)){
		if(h==0&&x==0)break;
		printf("%lf\n",x*(x+sqrt(4*h*h+x*x)));
	}
	return 0;
}
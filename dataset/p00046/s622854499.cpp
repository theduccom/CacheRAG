#include<stdio.h>

int main(){
	double a;
	double max=0,min=999999999;
	while(~scanf("%lf",&a)){
		if(max<a)max=a;
		if(min>a)min=a;
	}
	printf("%lf\n",max-min);
}
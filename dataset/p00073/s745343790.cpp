#include<stdio.h>
#include<math.h>

int main(){
	int  a,b;
	while(1){
		scanf("%d%d",&a,&b);
		if(!(a|b))return 0;
		printf("%lf\n",2*sqrt(((double)a/2)*((double)a/2)+b*b)*a+a*a);
	}
}
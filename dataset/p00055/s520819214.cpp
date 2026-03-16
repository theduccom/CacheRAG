#include<stdio.h>

int main(){
	double a;
	while(~scanf("%lf",&a)){
		double b=a,c=a;
		for(int i=2;i<=10;i++){
			if(i%2)b/=3;
			else b*=2;
			c+=b;
		}
		printf("%.8lf\n",c);
	}
}
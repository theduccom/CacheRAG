#include<stdio.h>

int main(){
	double wa,a;
	int i;
	
	while(0<=scanf("%lf",&a)){
		wa=a;
		for(i=2;i<11;i++){
			if(i%2==0){
				a=2*a;
				wa+=a;
			}else{
				a=a/3;
				wa+=a;
			}
		}
		printf("%.8lf\n",wa);
	}
	return 0;
}
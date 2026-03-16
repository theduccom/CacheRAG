#include<stdio.h>

int main(){
	int a;
	while(1){
		scanf("%d",&a);
		if(!a)return 0;
		int b=0;
		while(a>0){
			b+=a/=5;
		}
		printf("%d\n",b);
	}
}
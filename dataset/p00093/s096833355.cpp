#include<stdio.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	while(1){
		bool c=false;
		if(!(a|b))return 0;
		for(int i=a;i<=b;i++){
			if(i%400==0){
				c=true;
				printf("%d\n",i);
			}else if(i%100==0);
			else if(i%4==0){
				c=true;
				printf("%d\n",i);
			}
		}
		if(!c)printf("NA\n");
		scanf("%d%d",&a,&b);
		if(a|b)printf("\n");
	}
}
#include<stdio.h>

int main(){
	int a,b,i,c;
	int d=0;
	while(0<=scanf("%d%d",&a,&b)){
		if(a==0 && b==0) break;
		if(d>0){
			printf("\n");
		}
		++d;
		c=0;
		for(i=a;i<=b;i++){
			if(i%400==0 || i%100!=0 && i%4==0){
				++c;
				printf("%d\n",i);
			}
		}
		if(c==0){
			printf("NA\n");
		}else{
			printf("");
		}
	}
	return 0;
}
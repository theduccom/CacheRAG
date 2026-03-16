#include<stdio.h>
int main(){
int years[3001]={0},a,b,c,f=0;
for(int i=0;i<3000;i++){
	if(i%4==0){
		if(i%100==0 && i%400==0){
			years[i]=1;
		}else if(i%100!=0){
			years[i]=1;
		}
	}
}	
while(1){
	scanf("%d %d",&a,&b);
	if(a==0 && b==0) break;
	f==0?f=1:printf("\n");
	c=0;
	a+=(a%4==0?0:4-a%4);
	for(int i=a;i<=b;i+=4){
		if(years[i]==1){
			printf("%d\n",i);
			c++;
		}
	}
	printf("%s",c==0?"NA\n":"");
}
}
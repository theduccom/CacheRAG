#include<stdio.h>
int main(void)
{
	int a,s,d,i,f;
	f=0;
	scanf("%d %d",&a,&s);
	while(a!=0&&s!=0){
	d=0;
	if(f!=0){
		printf("\n");
	}
	for(i=a;i<=s;i++){
		if(i%4==0&&i%100!=0||i%400==0){
			printf("%d\n",i);
			d=1;
		}
	}
	if(d==0){
		printf("NA\n");
	}
	scanf("%d %d",&a,&s);
	f++;
	}
	return 0;
}
#include<stdio.h>
int main(void)
{
	int n,a,b,c,i,x;
	scanf("%d",&n);
	while(n!=0){
		for(i=0;i<n;i++){
			scanf("%d %d %d",&a,&b,&c);
			x=0;
			if(a==100 || b==100 || c==100)  x=1;
			else if((a+b)/2>=90)  x=1;
			else if((a+b+c)/3>=80)  x=1;
			else if((a+b+c)/3>=70)  x=2;
			else if((a+b+c)/3>=50 && (a>=80 || b>=80))  x=2;
			if(x==1)  printf("A\n");
			else if(x==2)  printf("B\n");
			else printf("C\n");
		}
		scanf("%d",&n);
	}
	return 0;
}
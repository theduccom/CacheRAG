#include<stdio.h>
#include<math.h>
int main(void)
{
	int a,b,c;
	int tyo,hishi;
	tyo=0;
	hishi=0;
	while(scanf("%d,%d,%d",&a,&b,&c)!=EOF){
		if(a==b){
			hishi++;
		}
		if(c*c==a*a+b*b){
			tyo++;
		}
	}
	printf("%d\n%d\n",tyo,hishi);
	return 0;
}
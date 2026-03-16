#include<stdio.h>
int main(void)
{
	int a,s,d,i,f,g,max,h;
	scanf("%d",&a);
		while(a!=0){
		max=-1;
		for(i=1;i<=a;i++){
			scanf("%d %d %d",&s,&d,&f);
			g=d+f;
			if(max<g){
				max=g;
				h=s;
			}
		}

	printf("%d %d\n",h,max);
	scanf("%d",&a);
	}
	
	return 0;
}

	
	
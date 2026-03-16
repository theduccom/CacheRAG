#include<stdio.h>
int main()
{
	int tanka,ryo,souryo=0,suryo=0,k=0,heikin,heikinkari;
	while(scanf("%d,%d",&tanka,&ryo)!=EOF)
	{
		souryo+=(tanka*ryo);
		suryo+=ryo;
		k++;
	}
	
	heikinkari=(suryo*10 /k);
	heikin=suryo/k;
	if(heikinkari%10>4)
	{
		heikin++;
	}
	
	printf("%d\n%d\n",souryo,heikin);
	return 0;
}
 
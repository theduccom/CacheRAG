#include <stdio.h>

int main(){
	int a, b;
	int G=0, H=0;
	int i=0;
	while(scanf("%d,%d", &a, &b)!=EOF)
	{
		G+=a*b;
		H+=b;
		i++;
	}
	H=H*10/i;
	if(H/i%10<=5)
	{
		H+=10;
		H/=10;
	}
	else
	{
		H/=10;
	}
	printf("%d\n%d\n", G, H);
	return 0;
}
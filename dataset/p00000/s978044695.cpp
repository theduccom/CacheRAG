#include<stdio.h>
int main(void)
{
	int i,j;
	char a;
	a='x';
	for(i=1;i<=9;i++){
		for(j=1;j<=9;j++){
			printf("%d%c%d=%d\n",i,a,j,i*j);
		}
	}
return 0;
}

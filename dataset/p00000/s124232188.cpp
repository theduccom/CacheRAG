#include<stdio.h>

int main(void)
{
	int i,j,s;
		for(i=1;i<=9;i++){
			for(j=1;j<=9;j++){
			s=i * j;
			printf("%dx%d=%d\n",i,j,s);
		}
	}
	 return 0;
}
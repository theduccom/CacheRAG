#include<stdio.h>

int main()
{
	int i,ii,ru=0,rare=0;

	for(i=1;i<10;i++){
		rare++;
		for(ii=1;ii<10;ii++){
			ru++;
			printf("%dx%d=%d\n",rare,ru,rare*ru);
		}
		ru=0;
	}
	return 0;
}
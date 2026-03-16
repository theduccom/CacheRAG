#include<stdio.h>

int main(void)
{
	int tanka,kosu,i,j,k;
	double ave;
	tanka=kosu=k=0;
	while(scanf("%d,%d",&i,&j)!=EOF){
       tanka+=i*j;
	   kosu+=j;
	   k++;
	}
	ave=(kosu*1.0/k +0.5);
	printf("%d\n",tanka);
	printf("%d\n",(int)ave);
	return 0;
}
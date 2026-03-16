#include<stdio.h>
int main(void)
{
	int a,s,d[11],f,g,i,j;
	scanf("%d",&a);
	while(a!=0){
	for(i=0;i<10;i++) d[i]=0;
		for(i=0;i<a;i++){
			scanf("%d",&s);
			d[s]++;
		}
		for(i=0;i<10;i++){
			if(d[i]>0){
				for(j=0;j<d[i];j++){
					printf("*");
				}
			}
			else if(d[i]==0){
				printf("-");
			}
			printf("\n");
		}
		scanf("%d",&a);
	}
	return 0;
}
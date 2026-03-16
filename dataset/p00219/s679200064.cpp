#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void)
{
	int a,s,d[10],f,g,h,j,i,k;
	while(1){
		scanf("%d",&a);
		if(a==0) break;
		for(i=0;i<10;i++) d[i]=0;
		for(i=0;i<a;i++){
			scanf("%d",&s);
			d[s]++;
		}
		for(i=0;i<10;i++){
			for(j=1;j<=d[i];j++){
				printf("*");
			}
			if(d[i]==0) printf("-");
			printf("\n");
		}
	}
	return 0;
}
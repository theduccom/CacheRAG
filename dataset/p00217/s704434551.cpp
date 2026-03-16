#include<stdio.h>
int main(void){
	int n,i;
	int p,d1,d2;
	int tmp,ans,max=-1;
	while(1){
		scanf("%d",&n);
		if(n==0) break;
		max=-1;
		for(i=0;i<n;i++){
			scanf("%d %d %d",&p,&d1,&d2);
			if(d1+d2>max){
				tmp=p;
				max=d1+d2;
			}
		}
		printf("%d %d\n",tmp,max);
	}
	return 0;
}
#include<stdio.h>
int main(void){
	int n;
	long long int ban[4001],tan,suu;
	long long int bansum[4001],banf[4001],i;
	while(1){
		scanf("%d",&n);
		if(n==0){
			break;
		}
		for(i=1;i<=4000;i++){
			bansum[i]=banf[i]=0;
		}
		for(i=0;i<n;i++){
			scanf("%ld %ld %ld",&ban[i],&tan,&suu);
			bansum[ban[i]]+=tan*suu;
		}
		int flg=0;
		for(i=0;i<n;i++){
			if(bansum[ban[i]]>=1000000 && banf[ban[i]]==0){
				printf("%d\n",ban[i]);
				banf[ban[i]]=1;
				flg=1;
			}
		}
		if(flg==0){
			printf("NA\n");
		}
	}
	return 0;
}
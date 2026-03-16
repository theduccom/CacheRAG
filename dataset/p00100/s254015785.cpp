#include <stdio.h>
 
 

 
int main(void){
	int i,j,k;
	int n,num[4000];
	long long int tanka,sale_num,sale_sum[4000],sale_all[4001];
	bool judge[4001];
	
	while(scanf("%d",&n),n){
		
		//初期化

		k=0;
		for(j=0;j<=4001;j++){
			judge[j]=0;
			sale_all[j]=0;
		}
		
		for(i=0;i<n;i++){
			scanf("%d %lld %lld",&num[i],&tanka,&sale_num);
			sale_sum[i]=tanka*sale_num;
		}
		
		
		//idに対応したsaleに+
		for(i=0;i<n;i++){
			sale_all[num[i]] = sale_all[num[i]] + sale_sum[i];
		}
		
		for(i=0;i<n;i++){
			if((sale_all[num[i]] >= 1000000)&&(judge[num[i]]==0)){
				printf("%d\n",num[i]);
				judge[num[i]]=1;
				k=1;
			}
		}
		
		if(k!=1)printf("NA\n");
	}
	
	return 0;
}
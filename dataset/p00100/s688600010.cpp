#include<stdio.h>
#include<math.h>
#include<string.h>


int main(){
	long long int uriage[4000][3],n,no,tanka,su,i,j,newflag,naflag;
	
	while(0<=scanf("%lld",&n)){
		if(n==0) break;
		
		memset(uriage,0,sizeof(uriage));
		
		for(i=0;i<n;i++){
			scanf("%lld%lld%lld",&no,&tanka,&su);
			
			newflag=0;
			
			for(j=0;j<n;j++){
				if(uriage[j][0]==no){
					uriage[j][1]+=tanka*su;
					newflag=1;
					break;
				}
			}
			
			if(newflag==0){
				for(j=0;j<n;j++){
					if(uriage[j][0]==0){
						uriage[j][1]+=tanka*su;
						uriage[j][0]=no;
						break;
					}
				}
			}
		}
		naflag=0;
		for(i=0;i<n;i++){
			if(uriage[i][0]==0)break;
			if(uriage[i][1]>=1000000){
				printf("%lld\n",uriage[i][0]);
				naflag=1;
			}
		}
		if(naflag==0)printf("NA\n");
	}
	return 0;
}
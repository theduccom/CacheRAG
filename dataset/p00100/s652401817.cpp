#include<stdio.h>
#include<string.h>
int main(void)
{
	long long int n,m,flg,i,j,a[1001],b[1001],c[1001];
	long long int e[1001],p[1001],q[1001];
	while(1){
		scanf("%lld",&n);
		if(n==0) break;
		for(i=0;i<n;i++){
			a[i]=0; b[i]=0; c[i]=0;
		}	
		for(i=0;i<n;i++){
			scanf("%lld %lld %lld",&e[i],&p[i],&q[i]);
			if(p[i]*q[i]>=1000000) a[i]=1;
			if(a[i]==0) b[i]=p[i]*q[i];
		}	
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(e[i]==e[j]){
					if(a[i]==0){
						b[i]+=b[j];
						b[j]=0;
					}
					if(b[i]>=1000000&&a[i]==0) a[i]=1;
				}
			}
		}
		flg=0;
		for(i=0;i<n;i++){
			if(a[i]!=0){
				printf("%lld\n",e[i]);
				flg=1;
			}
		}	
		if(flg==0) printf("NA\n");
	}
	return 0;
}
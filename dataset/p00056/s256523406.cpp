#include<stdio.h>
#include<string.h>

char so[50001];

main(){
	memset(so,0,sizeof(so));
	
	int n,i,j,count;
	for(i=2;i<225;i++){
		for(j=i;j*i<=50000;j++){
			so[j*i]=1;
		}
	}
	
	while(~scanf("%d",&n)){
		if(n==0)break;
		count=0;
		for(i=2;i<(n>=25000 ? 25000:n);i++){
			if(i>n-i)break;
			if(so[i]==0 && so[n-i]==0){
				++count;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
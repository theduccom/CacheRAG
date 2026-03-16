#include <stdio.h>

int main(){
	int i,n,k,data[10000];
	for(i=2;i<10000;i++){
		data[i]=1;
	}
	for(i=2;i*i<10000;i++){
		if(data[i]==1){
			for(k=i*i;k<=10000;k+=i){
				data[k]=0;
			}
		}
	}
	while(1){
		scanf("%d",&n);
		if(n==0) break;
		for(i=n;n>=3;i--){
			if(data[i]==1&&data[i-2]==1){
				printf("%d %d\n",i-2,i);
				break;
			}
		}
	}
	return 0;
}
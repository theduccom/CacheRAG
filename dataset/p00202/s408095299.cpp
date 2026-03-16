#include<stdio.h>
#include<string.h>
int prime(int);
int p[1000001]={};
int main(){
	int n,x,v[30],i,j,o,a;
	while(1){
		memset(p,0,sizeof(p));
		memset(v,0,sizeof(v));
		scanf("%d %d",&n,&x);
		if(n==0&&x==0){
			break;
		}
		for(i=0;i<n;i++){
			scanf("%d",&v[i]);
			p[v[i]]=1;
		}
		for(i=0;i<=x;i++){
			if(p[i]){
				for(j=0;j<n;j++){
					if(i+v[j]<=x){
						p[i+v[j]]=1;
					}
				}
			}
		}
		o=0;
		for(i=x;i>=0;i--){
			if(p[i]){
				if(prime(i)){
					o=1;
					break;
				}
				
			}
		}
		if(o){
			printf("%d\n",i);
		}
		else{
			printf("NA\n");
		}
	}
	return 0;
}
int prime(int x){
	int i;
	if(x<2) return 0;
	else if(x==2) return 1;
	if(x%2==0) return 0;
	for(i=3;i*i<=x;i+=2){
		if(x%i==0) return 0;
	}
	return 1;
}
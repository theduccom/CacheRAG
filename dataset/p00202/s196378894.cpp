#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
using namespace std;
int	flg[1000001],gen[1000001];
int main(void)
{
	int n,x,j,i,kazu[30],ff;
	
	for(i=2;i<=1000000;i++) flg[i]=1;
	for(i=2;i*i<=1000000;i++){
		if(flg[i]==1){
			for(j=2;j*i<1000000;j++) flg[i*j]=0;
		}
	}
	while(1){
		scanf("%d %d",&n,&x);
		if(n==0 && x==0) break;
		for(i=0;i<n;i++) scanf("%d",&kazu[i]);
		for(i=0;i<=x;i++) gen[i]=0;
		gen[0]=1;
		for(i=0;i<n;i++){
			for(j=0;j<x;j++){
				if(gen[j]==1){
					if(j+kazu[i]<=x) gen[j+kazu[i]]=1;
				}
			}
		}
		ff=0;
		for(i=x;i>=2;i--){
			if(gen[i]==1 && flg[i]==1){
				ff=1;
				break;
			}
		}
		if(ff==0) printf("NA\n");
		else printf("%d\n",i);
	}
	return 0;
}
	
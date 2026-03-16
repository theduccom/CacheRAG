#include<stdio.h>
int n,x;
int i,j;
bool k[1000001];
bool l[1000001];
int p[30];

int max(int a,int b){return a>b?a:b;}

int comp(const void *a,const void *b){
	int *p=(int*)a;
	int *q=(int*)b;
	return *q-*p;
}

int main(){
	while(1){
		scanf("%d %d",&n,&x);
		if(n==0&&x==0)return 0;
		for(i=0;i<=x;i++)k[i]=false;
		for(i=0;i<=x;i++)l[i]=true;
		for(i=0;i<n;i++){
			scanf("%d",&p[i]);
			k[p[i]]=true;
		}
		for(i=1;i<=x;i++){
			if(k[i]){
				for(j=0;j<n;j++)if(i+p[j]<=x)k[i+p[j]]=true;
			}
		}
		int ans=0;
		for(i=2;i<=x;i++){
			if(l[i]){
				for(j=1;j*i<=x;j++){
					l[j*i]=false;
				}
				if(k[i])ans=max(ans,i);
			}
		}
		if(ans==0)printf("NA\n");
		else printf("%d\n",ans);
	}
}
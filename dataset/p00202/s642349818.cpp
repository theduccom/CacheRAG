#include<stdio.h>
#include<string.h>
#include<math.h>
long long int a,s,d[1000001],f,g[10000001],h[1000001];
int main(void)
{
	int j,i,k;
	for(i=0;i<1000001;i++){
		h[i]=0;
		g[i]=0;
	}
	for(i=2;i*i<=1000000;i++){
		if(h[i]==0){
			for(j=2;j<=500000;j++){
				if(i*j>1000000) break;
				h[i*j]=1;
			}
		}
	}
	while(1){
		scanf("%d %d",&a,&s);
		f=0;
		if(a==0&&s==0) break;
		for(i=0;i<1000001;i++) g[i]=0;
		for(i=0;i<a;i++){
			scanf("%d",&d[i]);
			g[d[i]]=1;
		}
		for(i=0;i<=s;i++){
			if(g[i]==1){
				for(j=0;j<a;j++){
					if(i+d[j]<=s) g[i+d[j]]=1;
				}
			}
		}
		for(i=s;i>1;i--){
			if(h[i]==0&&g[i]==1){
				f=i;
				break;
			}
		}
		if(f==0) printf("NA\n");
		else printf("%d\n",f);
	}
	return 0;
}
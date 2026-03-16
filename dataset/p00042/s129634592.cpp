#include <stdio.h>
int main(){
	int n,w,a[10000],v,l,k=1;
	while(true){
		scanf("%d",&w);
		if(w==0)return 0;
		for(int i=0;i<=w;i++)a[i]=0;
		scanf("%d",&n);
		while(n--){
			scanf("%d,%d",&v,&l);
			for(int i=w;i>=l;i--)if(a[i]<a[i-l]+v)a[i]=a[i-l]+v;
		}
		l=w;
		while(a[l]==a[w])l--;
		printf("Case %d:\n%d\n%d\n",k,a[w],l+1);
		k++;
	}
}
#include<stdio.h>
int main(void)
{
	int n,p[10001],d1[10001],d2[10001];
	int i,j,s[10001],max=0;
	while(1){
		scanf("%d",&n);
		if(n==0) break;
		for(i=0;i<n;i++) s[i]=0;
		for(i=0;i<n;i++){
			scanf("%d %d %d",&p[i],&d1[i],&d2[i]);
			s[i]=d1[i]+d2[i];
		}
		max=0;
		for(i=0;i<n;i++){
			if(max<s[i]){
				max=s[i];
				j=i;
			}
		}	
		printf("%d %d\n",p[j],max);
	}	
	return 0;
}	
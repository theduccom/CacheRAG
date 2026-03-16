#include<stdio.h>
int main(void)
{
    int a[10000],b[10000],ban[10000],i,n,ran,w;
	while(1){
	    scanf("%d",&n);
		if(n==0) break;
		ran=0;
		for(i=0;i<n;i++){
		    scanf("%d %d %d",&ban[i],&a[i],&b[i]);
		}
		for(i=0;i<n;i++){
		    if(ran<a[i]+b[i]){
			    ran=a[i]+b[i];
				w=i;
			}
		}
		printf("%d %d\n",ban[w],ran);
	}
	return 0;
}
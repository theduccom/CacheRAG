#include<stdio.h>
int main(void)
{
    int n,i,a,b,c,z,q;
	while(1){
	    scanf("%d",&n);
		if(n==0) break;
		z=0;
		for(i=0;i<n;i++){
		    scanf("%d %d %d",&a,&b,&c);
			if(z<b+c){
			    z=b+c;
				q=a;
			}
		}
		printf("%d %d\n",q,z);
	}
	return 0;
}
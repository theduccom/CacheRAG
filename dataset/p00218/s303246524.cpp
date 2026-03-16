#include<stdio.h>
int main(void)
{
    int n,a[10000],b[10000],c[10000],i;
	while(1){
	    scanf("%d",&n);
		if(n==0) break;
		for(i=0;i<n;i++){
		    scanf("%d %d %d",&a[i],&b[i],&c[i]);
		}
		for(i=0;i<n;i++){
		    if(a[i]==100||b[i]==100||c[i]==100) printf("A\n");
			else if((a[i]+b[i])/2>=90||(a[i]+b[i]+c[i])/3>=80) printf("A\n");
			else if((a[i]+b[i]+c[i])/3>=70||(a[i]+b[i]+c[i])/3>=50&&a[i]>=80||b[i]>=80) printf("B\n");
			else printf("C\n");
		}
	}
	return 0;
}
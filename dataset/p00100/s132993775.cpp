#include<stdio.h>
int main(void)
{
    int n,flg,j,i,a[1000];
	double b[1000],c[1000],d[1000];
	while(1){
	    scanf("%d",&n);
		if(n==0) break;
		for(i=0;i<n;i++){
		    scanf("%d %lf %lf",&a[i],&b[i],&c[i]);
		}
		for(i=0;i<n;i++){
		    d[i]=b[i]*c[i];
		}
		for(i=0;i<n-1;i++){
		    for(j=i+1;j<n;j++){
			    if(a[i]==a[j]){
				    d[i]=d[i]+d[j];
					d[j]=0;
				}
			}
		}
		flg=0;
		for(i=0;i<n;i++){
		    if(d[i]>=1000000){
			    printf("%d\n",a[i]);
				flg=1;
			}
		}
		if(flg==0) printf("NA\n");
	}
	return 0;
}
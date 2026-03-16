#include<stdio.h>
int main(void)
{
	int n,a[10000],s,d,max,z,x[10000],i,j;
	while(1){
	scanf("%d",&n);
	if(n==0)	break;
	for(i=0;i<n;i++){
		scanf("%d %d %d",&a[i],&s,&d);
		  x[i]=s+d;
	}
	max=0;
	for(i=0;i<n;i++){
		if(max<x[i])	{
				max=x[i];
				z=a[i];
		}
	}	
	printf("%d %d\n",z,max);
   }
  return 0;
}
#include<stdio.h>
int main(void)
{
	int n,i,a[101],b[101],c[101],s,ss,sss,z;
	scanf("%d",&n);
	while(n!=0){
		for(i=0;i<n;i++){
			z=0;
			scanf("%d %d %d",&a[n],&b[n],&c[n]);
			ss=a[n]+b[n]+c[n];
			s=ss/3;
			sss=(a[n]+b[n])/2;
			if(100==a[n] || 100==b[n] || 100==c[n]){
				printf("A\n");
				z=1;
			}
			else if(sss>=90){
				printf("A\n");
				z=1;
			}
			else if(s>=80){
				printf("A\n");
				z=1;
			}
			else if(s>=70){
				printf("B\n");
				z=1;
			}
			else if(s>=50){
				if(a[n]>=80 || b[n]>=80){
				printf("B\n");
				z=1;
				}
			}
			if(z==0){
				printf("C\n");
			}
		}
		scanf("%d",&n);
	}
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int p,a,b,c,i,n,x;
	while(1)
	{
	scanf("%d %d %d",&a,&b,&c);
	if(a==0)return 0;
	if(a<c){
		p=a;
		a=c;
		c=a;
	}
	if(a<b){
		p=a;
		a=b;
		b=a;
	}
	double r=sqrt(b*b+c*c);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		if(r<(double)x*2)printf("OK\n");
		else printf("NA\n");
	}
	}
}
		
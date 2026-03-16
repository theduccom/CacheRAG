#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void)
{
	long long int a,s,d,f,g[100000],h,i,j,z,x,c,q[4];
	while(1){
			scanf("%lld %lld %lld",&a,&s,&d);
			if(a==0&&s==0&&d==0)	break;
		scanf("%lld",&f);
		for(i=0;i<f;i++)	scanf("%lld",&g[i]);
		q[0]=a*a+s*s;
		q[1]=a*a+d*d;
		q[2]=s*s+d*d;
		for(i=0;i<f;i++){
			j=(g[i]*2)*(g[i]*2);
			if(j<=q[0]&&j<=q[1]&&j<=q[2])	printf("NA\n");
			else	printf("OK\n");
		}
	}
	return 0;
}
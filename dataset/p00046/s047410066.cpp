#include<stdio.h>
int main(void)
{
		float o,m,n,i;
		m=0;
		n=10000000;
	while(scanf("%f",&o)!=EOF){
		if(m<o){
			m=o;
		}
		if(n>o){
			n=o;
		}
	}	
		printf("%.2f\n",m-n);
	return 0;
}
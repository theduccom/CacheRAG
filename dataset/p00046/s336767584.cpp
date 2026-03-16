#include<stdio.h>
int main(void)
{
	float a,s,d,f,g,i,j;
	s=0;
	d=100000000;
	while(scanf("%f",&a)!=EOF){
		if(a>s){
			s=a;
		}
		if(a<d){
			d=a;
		}
	}
	printf("%f\n",s-d);
	return 0;
}
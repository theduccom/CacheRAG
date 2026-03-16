#include<stdio.h>


int main(void)
{
	int i;
	double a,s;
	while(scanf("%lf",&a)!=EOF){
		s=a;
		for(i=2;i<11;i++){
			if(i % 2==0){
				a*=2;
				s+=a;
			}
			else { 
				a/=3;
				s+=a;
			}
		}
		printf("%lf\n",s);
	}
	return 0;
}
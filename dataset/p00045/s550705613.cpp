#include <stdio.h>
int main(){
	int max=0,a,i=0;
	double avg=0,b;
	while(scanf("%d,%lf",&a,&b)!=EOF){
		max+=a*(int)b;
		avg+=b;
		i++;
	}
	avg/=(double)i;
	printf("%d\n%d\n",max,(int)(avg+0.50));
	return 0;
}
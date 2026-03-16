#include <stdio.h>

int main(){
	int p,n;
	int sum_p,sum_n,sum_d;
	sum_p = 0;
	sum_n = 0;
	sum_d = 0;
	double ans;
	int a;
	while(scanf("%d,%d",&p,&n) != EOF){
		sum_d++;
		sum_n += n;
		sum_p += p * n;
	}
	ans = (double)sum_n / (double)sum_d;
	a = (ans+0.5);
	printf("%d\n%d\n",sum_p,a);
	return 0;
}
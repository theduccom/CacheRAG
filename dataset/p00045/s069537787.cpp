#include <cstdio>
#include <cmath>

int main(){
	int n=0,psum=0,asum=0,price,amount;
	while(scanf("%d,%d",&price,&amount)!=EOF){
		psum += price*amount;
		asum += amount;
		n++;
	}
	printf("%d\n%.lf\n",psum,round((double)asum/(double)n));
	return 0;
}
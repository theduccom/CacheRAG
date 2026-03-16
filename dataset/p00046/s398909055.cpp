#include <stdio.h>

int main(){
	double n;
	double high,low;
	double ans;
	scanf("%lf",&n);
	high = n;
	low = n;
	while(scanf("%lf",&n) != EOF){
		if(high < n){
			high = n;
		}
		if(low > n){
			low = n;	
		}
	}
	ans = high - low;
	printf("%f\n",ans);
	return 0;
}
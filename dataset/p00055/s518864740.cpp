#include <iostream>
#include <cstdio>
using namespace std;
double ans;
double func(double d, int n){
	//printf("%f\n", d);
	ans += d;
	if(n == 11)return d;
	if(n % 2)return func(d/3.0, n+1);
	return func(2.0*d, n+1);
}

int main(){
	double d;
	while(scanf("%lf", &d) != EOF){
		ans = 0;func(d, 2);
		printf("%f\n", ans);
	}
	return 0;
}
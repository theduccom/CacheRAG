#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define int long long
signed main(){
	while(true){
		double x,h;
		scanf("%lf",&x);
		scanf("%lf",&h);
		if(x==0&&h==0) break;
		double s = sqrt(h*h+x*x/4.0);
		printf("%f\n",x*x+x*s*2.0);
	}
	return 0;
}
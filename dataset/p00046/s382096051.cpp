#include "bits/stdc++.h"
using namespace std;

int main() {
	double a=0.0, b=0.0, minsum=2000000.0, sum=-1000.0;
	double cnt = 0.0;
	while(scanf("%lf",&a)!= EOF){
	 sum=max(sum,a);
	 minsum=min(minsum,a);
	 }
	printf("%.5f", sum-minsum);
}
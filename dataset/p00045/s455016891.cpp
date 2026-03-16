#include "bits/stdc++.h"
using namespace std;

int main() {
	double a=0.0, b=0.0, sum=0.0, sumw=0.0;
	double cnt = 0.0;
	while(scanf("%lf,%lf",&a,&b)!=EOF){
	 sum=sum+a*b;
	 sumw=sumw+b;
	 cnt=cnt+1.0;
	 }

	cout << sum << endl;
	cout << (int) floor((sumw / cnt) + 0.5) << endl;
}
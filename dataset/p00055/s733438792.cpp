#include <iostream>
#include <cstdio>
using namespace std;
#define rep2(x,from,to) for(int x = (from); x < (to); ++(x))
#define rep(x,to) rep2(x,0,to)

int main() {
	double d;
	while(scanf("%lf", &d) != EOF) {
		double r[10];
		r[0] = d;
		rep2(i,1,10) {
			if(i % 2) r[i] = r[i-1] * 2;
			else r[i] = r[i-1] / 3;
		}
		double ret = 0;
		rep(i,10) {
			ret += r[i];
		}
		printf("%.8lf\n", ret);
	}
	return 0;
}
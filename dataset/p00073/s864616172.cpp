#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
#define rep2(x,from,to) for(int x = (from); x < (to); ++(x))
#define rep(x,to) rep2(x,0,to)
int main() {
	int x, h;
	while(cin >> x >> h && (x || h)) {
		double height = sqrt(pow((double)x/2,2.0) + pow(h,2.0));
		printf("%.6lf\n", x * (x + height * 2));
	}
	return 0;
}
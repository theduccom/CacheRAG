#include <cstdio>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

int main() {
	while(true) {
		double s;
		if(scanf("%lf", &s)<1)break;
		double y = s*s/19.6;
		double k = ceil(y/5+1);
		printf("%d\n", (int)k);
	}
	return 0;
}
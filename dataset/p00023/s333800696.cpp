#include <cstdio>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

int main() {
	int n; scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		double xa,ya,ra,xb,yb,rb;
		scanf("%lf%lf%lf%lf%lf%lf", &xa,&ya,&ra,&xb,&yb,&rb);
		ra = fabs(ra);
		rb = fabs(rb);
		double xd = xa-xb;
		double yd = ya-yb;
		double rd = ra+rb;
		double rd2 = fabs(ra-rb);
		double sq_cdist = xd*xd+yd*yd;
		double sq_rdist = rd*rd;
		double sq_rdist2 = rd2*rd2;
		if(sq_cdist<sq_rdist2) {
			if(ra>rb) {
				printf("2\n");
			} else {
				printf("-2\n");
			}
		} else if(sq_cdist<=sq_rdist) {
			printf("1\n");
		} else {
			printf("0\n");
		}
	}
	return 0;
}
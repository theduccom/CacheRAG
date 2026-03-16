#include<cstdio>
#include<cmath>
using namespace std;
static inline double s(double a){ return a * a; }
int main() {
	int n;
	scanf("%d",&n);
	while(n--) {
		double xa,ya,ra,xb,yb,rb;
		scanf("%lf%lf%lf%lf%lf%lf",&xa,&ya,&ra,&xb,&yb,&rb);
		double d = sqrt(s(xb-xa) + s(yb-ya));
		if(d + ra < rb) puts("-2");
		else if(d + rb < ra) puts("2");
		else if(d > ra + rb) puts("0");
		else puts("1");
	}
	return 0;
}
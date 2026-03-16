#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	int n; scanf("%d", &n);
	rep(i, n) {
		double x1, y1, r1, x2, y2, r2;
		scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &r1, &x2, &y2, &r2);
		double d = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
		if (d > r1 + r2)puts("0");
		else if (d < r1 - r2)puts("2");
		else if (d < r2 - r1)puts("-2");
		else puts("1");
	}
}
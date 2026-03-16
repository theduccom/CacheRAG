#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<(n);i++)
using namespace std;

int main() {
	int n; scanf("%d", &n);
	rep(i, n) {
		double x1, y1, x2, y2, x3, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		double a = -x1 + x2, b = -y1 + y2, c = (-pow(x1, 2) - pow(y1, 2) + pow(x2, 2) + pow(y2, 2)) / 2;
		double d = -x1 + x3, e = -y1 + y3, f = (-pow(x1, 2) - pow(y1, 2) + pow(x3, 2) + pow(y3, 2)) / 2;
		double y = (c*d - a*f) / (b*d - a*e);
		double x = (f - e*y) / d;
		printf("%.3lf %.3lf %.3lf\n", x, y, hypot(x1 - x, y1 - y));
	}
}
#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;

int main() {
	double x, h;
	while (cin >> x >> h, x) {
		double t = sqrt((x/2)*(x/2) + h*h);
		printf("%.6lf\n", x*x + x*t * 2);
	}
}
#include <bits/stdc++.h>  
 
using namespace std;
 
#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define repr(i, j) for(int i = j; i >= 0; --i)
#define INF (1 << 30)
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;

int main() {
	int N;
	scanf("%d", &N);
	rep(i, N) {
		double x1, y1, x2, y2, x3, y3;
		scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);     
		double a = 2 * (x2 - x1);
	    double b = 2 * (y2 - y1);
	    double c = x1 * x1 - x2 * x2 + y1 * y1 - y2 * y2;
	    double d = 2 * (x3 - x2);
	    double e = 2 * (y3 - y2);
	    double f = x2 * x2 - x3 * x3 + y2 * y2 - y3 * y3;
	          
	    double p = (b * f - c * e)/(a * e - d * b);
	    double q = (a * f - c * d)/(b * d - a * e);
		double r1 = sqrt( pow( p - x1, 2 ) + pow( q - y1, 2 ) );
        double r2 = sqrt( pow( p - x2, 2 ) + pow( q - y2, 2 ) );
        double r3 = sqrt( pow( p - x3, 2 ) + pow( q - y3, 2 ) );
        double r = ( r1 + r2 + r3 ) / 3.0;
		printf("%.3f %.3f %.3f\n", p, q, r);
	}
	return 0;
}
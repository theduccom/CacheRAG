#include<bits/stdc++.h>
using namespace std;
 
#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
 
typedef long long ll;
typedef pair<int, int> ii;
 
int main(){

	int n;
	cin >> n;
	rep(i, n){
		double x1, y1, x2, y2, x3, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		double vx21, vx31, vy21, vy31, tmp1, tmp2;
		vx21 = 2 * (x1 - x2);
		vx31 = 2 * (x1 - x3);
		vy21 = 2 * (y1 - y2);
		vy31 = 2 * (y1 - y3);
		tmp1 = x1 * x1 + y1 * y1 - x2 * x2 - y2 * y2;
		tmp2 = x1 * x1 + y1 * y1 - x3 * x3 - y3 * y3;
		
		double x, y, r;
		x = -(vy21 * tmp2 - vy31 * tmp1) / (vy31 * vx21 - vy21 * vx31);
		y = -(vx21 * tmp2 - vx31 * tmp1) / (vx31 * vy21 - vx21 * vy31);
		r = sqrt((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y));
		
		printf("%.3lf %.3lf %.3lf\n", x, y, r);
		
	}
 
	return 0;
}
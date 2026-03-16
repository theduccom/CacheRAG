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

	double d, a, ang = 90.0;
	double x = 0, y = 0;
	while(1){
		scanf("%lf,%lf", &d, &a);
		if(d == 0 && a == 0) break;
		x += d * cos(M_PI * ang / 180.0);
		y += d * sin(M_PI * ang / 180.0);
		ang -= a;
	}
	modf(x, &x);
	modf(y, &y);
	printf("%.0lf\n%.0lf\n", x, y);
	
	return 0;
}
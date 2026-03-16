#include <bits/stdc++.h>
using namespace std;

#define FOR(i,l,r) for(int i = (l);i < (r);i++)
#define ALL(x) (x).begin(),(x).end()
template<typename T> bool chmax(T& a,const T& b){return a < b ? (a = b,true) : false;}
template<typename T> bool chmin(T& a,const T& b){return b < a ? (a = b,true) : false;}
typedef long long ll;

int N;

int main()
{
	double x1,y1,x2,y2,x3,y3;
	scanf("%d",&N);
	FOR(i,0,N){
		scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
		double a = pow(x1 - x2,2.0) + pow(y1 - y2,2.0);
		double b = pow(x2 - x3,2.0) + pow(y2 - y3,2.0);
		double c = pow(x3 - x1,2.0) + pow(y3 - y1,2.0);
		double s = a * (b + c - a) + b * (c + a - b) + c * (a + b - c);
		double x = (a * (b + c - a) * x3 + b * (c + a - b) * x1 + c * (a + b - c) * x2) / s;
		double y = (a * (b + c - a) * y3 + b * (c + a - b) * y1 + c * (a + b - c) * y2) / s;
		printf("%.3f %.3f %.3f\n",x,y,sqrt(pow(x - x1,2.0) + pow(y - y1,2.0)));
	}

	return 0;
}
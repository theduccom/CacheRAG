#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i=a;i<b;i++)
#define REP(i,b) FOR(i,0,b)
#define MP make_pair

using namespace std;

inline double Square(double x){
	return x*x;
}

struct Pos{
	double x,y;
};

pair<Pos,double> ComputeCircle(Pos p,Pos q,Pos r){
	double a=-2.0*(p.x-q.x);
	double b=-2.0*(p.y-q.y);
	double c=Square(p.x)+Square(p.y)-Square(q.x)-Square(q.y);
	double d=-2.0*(p.x-r.x);
	double e=-2.0*(p.y-r.y);
	double f=Square(p.x)+Square(p.y)-Square(r.x)-Square(r.y);
	double k=1.0/(b*d-a*e);
	double x=(c*e-f*b)*k;
	double y=-(c*d-f*a)*k;
	double rad=sqrt(Square(p.x-x)+Square(p.y-y));
	return MP(Pos{x,y},rad);
}

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		Pos a,b,c;
		scanf("%lf%lf%lf%lf%lf%lf",&a.x,&a.y,&b.x,&b.y,&c.x,&c.y);
		auto p=ComputeCircle(a,b,c);
		printf("%.3f %.3f %.3f\n",p.first.x,p.first.y,p.second);
	}
}
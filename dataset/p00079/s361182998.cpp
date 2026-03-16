#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cassert>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<utility>
#include<numeric>
#include<algorithm>
#include<bitset>
#include<complex>

using namespace std;

typedef long long Int;
typedef vector<int> vint;
typedef pair<int,int> pint;
#define mp make_pair

template<class T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; }
template<class T> void chmin(T &t, T f) { if (t > f) t = f; }
template<class T> void chmax(T &t, T f) { if (t < f) t = f; }
int in() { int x; scanf("%d", &x); return x; }

struct Pt{
	double x,y;
	Pt(){}
	Pt(double x,double y):x(x),y(y){}
	Pt operator+(const Pt&a)const{return Pt(x+a.x,y+a.y);}
	Pt operator-(const Pt&a)const{return Pt(x-a.x,y-a.y);}
	Pt operator*(const Pt&a)const{return Pt(x*a.x-y*a.y,x*a.y+y*a.x);}
	Pt operator*(const double&k)const{return Pt(x*k,y*k);}
	Pt operator/(const double&k)const{return Pt(x/k,y/k);}
	double abs2()const{return x*x+y*y;}
	double arg()const{return atan2(y,x);}
	double dot(const Pt&a)const{return x*a.x+y*a.y;}
	double det(const Pt&a)const{return x*a.y-y*a.x;}
};

Pt proj(Pt a,Pt b){return a*a.dot(b)/a.abs2();}
Pt prep(Pt a,Pt b,Pt c){return a+proj(b-a,c-a);}
Pt refl(Pt a,Pt b,Pt c){return prep(a,b,c)*2-c;}

double area(Pt a,Pt b,Pt c){
	return fabs((b-a).det(c-a))/2;
}

int main() {
	Pt a,b,c;
	double res=0;
	scanf("%lf,%lf",&(a.x),&(a.y));
	scanf("%lf,%lf",&(b.x),&(b.y));
	for(;~scanf("%lf,%lf",&(c.x),&(c.y));){
		res+=area(a,b,c);
		b=c;
	}
	printf("%.10f\n",res);
	return 0;
}
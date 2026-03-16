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
	Pt(double x,double y) : x(x),y(y){}
	Pt operator+(const Pt &a) const {return Pt(x+a.x,y+a.y);}
	Pt operator-(const Pt &a) const {return Pt(x-a.x,y-a.y);}
	Pt operator*(const Pt &a) const {return Pt(x*a.x-y*a.y,x*a.y+y*a.x);}
	Pt operator*(const double &k) const {return Pt(x*k,y*k);}
	Pt operator/(const double &k) const {return Pt(x/k,y/k);}
	double abs() const {return sqrt(x*x+y*y);}
	double dot(const Pt &a) const {return x*a.x+y*a.y;}
	double det(const Pt &a) const {return x*a.y-y*a.x;}
};

int main() {
	Pt a,b,c;
	int n;
	n=in();
	int i;
	for(i=0;i<n;i++){
		cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y;
		Pt bc=c-b,ca=a-c,ab=b-a;
		Pt res=(b+c-bc*Pt(0,1)*ca.dot(ab)/ca.det(ab))/2;
		printf("%.3f %.3f %.3f\n",res.x,res.y,(res-a).abs());
	}
	return 0;
}
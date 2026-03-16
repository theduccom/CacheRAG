#include <bits/stdc++.h>
#define range(i, a, n) for(int (i) = (a); (i) < (n); (i)++)
#define rep(i, n) for(int (i) = 0; (i) < (n); (i)++)
using namespace std;
typedef bool B;
typedef long double D;
typedef complex<D> P;
typedef vector<P> VP;
typedef struct {P s,t;} L;
typedef vector<L> VL;
typedef struct {P c;D r;} C;
typedef vector <C> VC;

const D eps=1.0e-10;
const D pi=acos(-1.0);
template<class T> bool operator==(T a, T b){return abs(a-b)< eps;}
template<class T> bool operator< (T a, T b){return a < b-eps;}
template<class T> bool operator<=(T a, T b){return a < b+eps;}
template<class T> int sig(T a,T b = 0) {return a < b ? -1 : b > a ? 1 : 0;}
#define X real()
#define Y imag()

D ip(P a, P b) {return a.X * b.X + a.Y * b.Y;}
D ep(P a, P b) {return a.X * b.Y - a.Y * b.X;}
D sq(D a) {return sqrt(max(a, (D)0));}
P vec(L l){return l.t-l.s;}
inline P input(){D x,y;cin >> x >> y; return P(x,y);}
D area(VP pol){
	int n=pol.size();
	D sum=0.0;
	rep(i,n){
		D x=pol[i%n].X-pol[(i+1)%n].X;
		D y=pol[i%n].Y+pol[(i+1)%n].Y;
		sum+=x*y;
	}
	return abs(sum/2.0);
}
int main(void){
    VP p;
    D x, y; char c;
    while(cin >> x >> c >> y){
        p.push_back(P(x, y));
    }

    printf("%.12Lf\n", area(p));

	return 0;
}
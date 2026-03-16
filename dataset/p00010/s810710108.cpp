#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

typedef long double ld;
typedef complex<ld> Point;
const ld eps = 1e-8, pi = acos(-1.0);
bool eq(ld a, ld b){return (abs(b-a)<eps);}
ld dot(Point a, Point b){return real(conj(a)*b);}
ld cross(Point a, Point b){ return imag(conj(a)*b);}
class Line{
public:
  Point a,b;
};
Line Midependicular(const Point& a, const Point& b){
  Point normal = Point(a.imag()-b.imag(),b.real()-a.real());
  Line result;
  result.a = (b + a + normal) * 0.5L;
  result.b = (b + a - normal) * 0.5L;
  return result;
}
Point a,b,c;
void solve(){
  // center point is the cross point of 2 midperpendiculars
  Line s = Midependicular(a,b);
  Line t = Midependicular(a,c);
  Point sv=s.b-s.a,tv=t.b-t.a;
  Point result=s.a+sv*cross(tv,t.a-s.a)/cross(tv,sv);
  printf("%.3Lf %.3Lf %.3Lf\n",result.real(),result.imag(),abs(result-a));
}

int main(){ _;
  int n;cin>>n;
  REP(z,n){
    ld tmpX,tmpY;
    cin>>tmpX>>tmpY; a=Point(tmpX,tmpY);
    cin>>tmpX>>tmpY; b=Point(tmpX,tmpY);
    cin>>tmpX>>tmpY; c=Point(tmpX,tmpY);
    solve();
  }
}
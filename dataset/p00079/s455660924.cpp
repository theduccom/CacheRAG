#include <vector>
#include <iostream>
#include <complex>
#include <cstdio>

#define pb push_back
#define fs first
#define sc second
#define sz size()
using namespace std;

typedef double D;
typedef complex<D> P;
typedef pair<P, P> L;
typedef pair<P, D> C;
typedef vector<P> Poly;
const D EPS=1e-12;


namespace std{
  bool operator<(const P &a, const P &b){
    return real(a)==real(b)?imag(a)<imag(b):real(a)<real(b);
  }
}

P unit(P p){ return p / abs(p);}

D dot(P x, P y){return real(conj(x)*y);}

D cross(P x, P y){return imag(conj(x)*y);}

P rotate(P v, double s){
  return P(real(v)*cos(s) - imag(v) * sin(s), real(v)*sin(s) + imag(v) * cos(s));
}

D arg(P a, P b, P c){ return acos(dot(b-a, c-a)/(abs(b-a)*abs(c-a)));}
D arg(D a, D b, D c){return acos((b*b+c*c-a*a)/(2*b*c));}

int ccw(P a, P b, P c){
  b -= a; c -= a;
  if(cross(b, c) > EPS) return 1;
  if(cross(b, c) < -EPS) return -1;
  if(dot(b, c) < -EPS) return 2;
  if(abs(b) < abs(c)) return -2;
  return 0;
}

bool para(L a, L b){return abs(cross(a.fs - a.sc, b.fs-b.sc))<EPS;}

vector<P> cp_cir_to_cir(C a, C b){
  vector<P> v;
  D s = arg(b.sc, abs(b.fs -a.fs), a.sc);
  P x = a.sc * unit(b.fs - a.fs);
  v.pb(a.fs + rotate(x, s));
  v.pb(a.fs + rotate(x, -s));
  return v;
}

D area(Poly p){
  if(p.sz<3) return 0;
  D res = cross(p[p.sz-1],p[0]);
  for(int i=1;i<p.sz;i++) res += cross(p[i-1], p[i]);
  return res/2;
}

int main(){
  vector<P> v;
  D x, y;
  while(~scanf("%lf,%lf\n", &x, &y)){
    v.pb(P(x, y));
  }
  printf("%.10lf\n", area(v));
  
  return 0;
}




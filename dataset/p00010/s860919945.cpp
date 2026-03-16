#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<complex>
#include<cstdio>
typedef unsigned long long ull;
#define rep(i,a) for(int i=0;i<a;i++)
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
const double eps = 1e-10;
const double pi = acos(-1);
const double inf = (int)1e8;
const double EPS=1e-10;

typedef complex<double> P;
typedef vector<P> G;
 
struct L : public vector<P> {
  L(const P &a, const P &b) {
    push_back(a); push_back(b);
  }
};
P pin(){
    double x,y;
    char d;
    cin>>x>>y;
    P p(x,y);
    return p;
}
double cross(P a,P b){
    return imag(conj(a)*b);
}
P crosspointLL(const L &l, const L &m) {
  double A = cross(l[1] - l[0], m[1] - m[0]);
  double B = cross(l[1] - l[0], l[1] - m[0]);
  if (abs(A) < EPS && abs(B) < EPS) return m[0]; // same line
  return m[0] + B / A * (m[1] - m[0]);
}
int main(void){
  int n;
  cin>>n;
  rep(i,n){
    P a=pin(),b=pin(),c=pin();
    P t1=(a+b)/2.0;
    P t2=(b+c)/2.0;
    P out=crosspointLL(L(t1,(b-a)*P(0,1)+t1),L(t2,(c-b)*P(0,1)+t2));
    printf("%.3f %.3f %.3f\n",out.real(),out.imag(),abs(out-a));
  }
  return 0;
}
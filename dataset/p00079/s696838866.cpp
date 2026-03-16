#include <string>
#include <vector>
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<stack>
#include<queue>
#include<cmath>
#include<algorithm>
#include<functional>
#include<list>
#include<deque>
#include<bitset>
#include<set>
#include<map>
#include<cstring>
#include<sstream>
#include<complex>
#include<iomanip>
#include<numeric>
#define X first
#define Y second
#define pb push_back
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y-1);(X) >=0;--(X))
#define repe(X,Y) for ((X) = 0;(X) < (Y);++(X))
#define peat(X,Y) for (;(X) < (Y);++(X))
#define all(X) (X).begin(),(X).end()
#define rall(X) (X).rbegin(),(X).rend()

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
template<class T> ostream& operator<<(ostream &os, const vector<T> &t) {
os<<"{"; rep(i,t.size()) {os<<t[i]<<",";} os<<"}"<<endl; return os;}
template<class S, class T> ostream& operator<<(ostream &os, const pair<S,T> &t) { return os<<"("<<t.first<<","<<t.second<<")";}
#define re real()
#define im imag()

typedef complex<double> P;
typedef pair<P,P> L; //sX+tY
const double EPS=1e-10;
double dot(P a,P b){return (conj(a)*b).real();}
double cros(P a,P b){return (conj(a)*b).imag();}
double area(P a,P b,P c){
  b-=a; c-=a;
  return cros(b,c)/2;
}

double area(vector<P> ps){
  double ret=0;
  rep(i,ps.size()-2)
    ret+=area(ps[0],ps[i+1],ps[i+2]);
  return ret;
}

int main(){
  ios_base::sync_with_stdio(false);
  cout<<fixed<<setprecision(0);
  int i,j,k;
  vector<P> ps;
  double x,y;
  while(EOF!=scanf("%lf,%lf",&x,&y)){
    ps.pb(P(x,y));
  }
  printf("%.10f\n",abs(area(ps)));
  return 0;
}
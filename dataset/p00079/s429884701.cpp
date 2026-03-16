#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <fstream>
#include <complex>
#include <stack>
#include <queue>

using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
typedef pair<double, double> P;
static const double EPS = 1e-5;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)

P grabity(vector<P> points){
  double x=0,y=0;
  REP(i,points.size()){
    x += points[i].first;
    y += points[i].second;
  }
  x/=(double)points.size();
  y/=(double)points.size();
  return P(x,y);
}
double diff(P p1, P p2){
  return sqrt( pow(p2.first-p1.first,(double)2) 
      + pow(p2.second-p1.second,(double)2) );
}
double area(P p1, P p2, P p3){
  double a = diff(p1,p2);
  double b = diff(p2,p3);
  double c = diff(p3,p1);
  double z = (a+b+c)/2;
  return (sqrt(z*(z-a)*(z-b)*(z-c)));
}

int main(void){
  vector<P> points;
  double x,y;
  while(scanf("%lf,%lf",&x,&y)!=EOF){
    points.push_back(P(x,y));
  }
  double ans = 0;
  P g = grabity(points); 
  REP(i,points.size()){
    ans += area(points[i],
        points[(i+1)%points.size()],g);
  }
  cout<<ans<<endl;
  return 0;
}
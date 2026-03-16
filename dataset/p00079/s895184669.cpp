#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;
typedef pair<double,double> P;
double cross(P p1,P p2){
  return p1.first*p2.second-p1.second*p2.first;
}
double getArea(vector<P> p){
  double sum=0;
  for(int i=0;i<p.size();i++)sum+=cross(p[i],p[(i+1)%p.size()]);
  return abs(sum/2.0);
}

int main(){
  vector<P> poly;
  P p;
  while(scanf("%lf,%lf",&p.first,&p.second) != EOF){
    poly.push_back(p);
  }
  printf("%.6f\n",getArea(poly));
}
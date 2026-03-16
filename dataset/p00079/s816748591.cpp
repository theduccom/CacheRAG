#include <bits/stdc++.h>
using namespace std;

double calcLength(double x1, double x2, double y1, double y2){
  return sqrt(abs((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)));
}

int main(void){
  double ans = 0;
  vector<pair<double, double> > p;
  pair<double, double> tmp;
  while(scanf("%lf,%lf", &tmp.first, &tmp.second) != EOF){
    p.push_back(tmp);
  }
  
  for(int i=1; i < p.size() - 1; i++){
    double r[3];
    for(int j=0; j < 2; j++){
      double x1 = p[0].first, x2 = p[i+j].first;
      double y1 = p[0].second, y2 = p[i+j].second;
      r[j] = calcLength(x1, x2, y1, y2);
    }
    double x1 = p[i].first, x2 = p[i+1].first;
    double y1 = p[i].second, y2 = p[i+1].second;
    r[2] = calcLength(x1, x2, y1, y2);
    double z = (r[0] + r[1] + r[2]) / 2;
    ans += sqrt(z*(z-r[0])*(z-r[1])*(z-r[2]));
  }
  printf("%f\n", ans);
  return 0;
}
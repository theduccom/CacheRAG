#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>

using namespace std;

vector<pair<double,double> > v;

double s(double x1, double y1, double x2, double y2, double x3, double y3){
  double a,b,c,z;

  a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
  b = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
  c = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));

  z = (a+b+c)/2;

  return sqrt(z*(z-a)*(z-b)*(z-c));
}

int main(void){
  int n=0;
  double x,y;
  double ret=0;

  while(cin >> x){
	cin.ignore();
	cin >> y;
	v.push_back(make_pair(x,y));
	n++;
  }
  
  for(int i=0;i<n-2;i++){
	ret += s(v[0].first, v[0].second, v[i+1].first,
			 v[i+1].second, v[i+2].first, v[i+2].second);
  }

  printf("%.7f\n", ret);
}
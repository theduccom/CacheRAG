#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;
typedef double d;

d heron(d a,d b,d c){
  d s = (a+b+c)/2;
  return sqrt(s*(s - a)*(s - b)*(s - c));
}
int main(){
  d x1,y1,x2,y2,x3,y3;
  char c;
  d sum = 0.0;
  cin >> x1 >>c>> y1>> x2 >> c >> y2;
  while( cin >> x3 >> c >> y3){
    double a = sqrt(pow(x1 - x2,2) + pow(y1 - y2,2));
    double b = sqrt(pow(x1 - x3,2) + pow(y1 - y3,2));
    double c = sqrt(pow(x2 - x3,2) + pow(y2 - y3,2));
    sum +=  heron(a,b,c);
    x2 = x3,y2 = y3;
  }
  printf("%.6f\n",sum);
}
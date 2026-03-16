#include<bits/stdc++.h>
using namespace std;
typedef pair<int,string> P;

int main(){
  int N;
  cin >> N;
  while(N--){
    double x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double a = 2*(x2-x1),b = 2*(y2-y1),c = x1*x1 - x2*x2 + y1*y1 - y2*y2;
    double d = 2*(x3-x1),e = 2*(y3-y1),f = x1*x1 - x3*x3 + y1*y1 - y3*y3;
    double x = (b*f - e*c)/(a*e - d*b);
    double y = (c*d - f*a)/(a*e - d*b);
    double r = sqrt((x-x1)*(x-x1) + (y-y1)*(y-y1));
    printf("%.3f %.3f %.3f\n",x,y,r);
  }
}
  
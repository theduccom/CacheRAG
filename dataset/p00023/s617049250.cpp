#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int hantei(double x1, double y1, double x2, double y2, double r1, double r2)
{
  double d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
  double sr = (r1+r2)*(r1+r2);
  double dr = (r1-r2)*(r1-r2);
  d = sqrt(d);
  sr = sqrt(sr);
  dr = sqrt(dr);
  if(d > sr){
    return 0;
  }else if(d < sr && dr < d){
    return  1;
  }else if(dr > d){
    return (r1>r2)? 2 : -2;
  }else{ 
    return 1;
  }
}

int main(void)
{
  int n, ans;
  double xa, ya, ra, xb, yb, rb;
  
  cin >> n;
  for(int i = 0 ; i < n ; i++){
    cin >> xa >> ya >> ra >> xb >> yb >> rb;
    ans = hantei(xa, ya, xb, yb, ra, rb);
    cout << ans << endl;
  }
  return 0;
}
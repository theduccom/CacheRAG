#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main(){
  int n;
  double a,b,c,d,e,f;
  double x1,x2,x3,y1,y2,y3;
  double px,py;
  double r;

  cin >> n;

  for(int i=0;i<n;i++){
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    a = (x2-x1)*2.0;
    b = (y2-y1)*2.0;
    c = (x2*x2 + y2*y2 - x1*x1 - y1*y1);
    d = (x3-x1)*2.0;
    e = (y3-y1)*2.0;
    f = (x3*x3 + y3*y3 - x1*x1 - y1*y1);
    px = (c*e-b*f)/(a*e-b*d);
    py = (a*f-c*d)/(a*e-b*d);
    r = sqrt((px-x1)*(px-x1) + (py-y1)*(py-y1));
    //printf("%.3f %.3f %.3f\n",px,py,r);
    cout << fixed << setprecision(3) << px << " " << py << " " << r << endl;



  }

  return 0;
}
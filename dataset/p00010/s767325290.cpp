#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
  int n;
  cin >> n;
  for(int i = 0;i<n;i++){
    double x1,y1,x2,y2,x3,y3,a1,b1,c1,a2,b2,c2,x,y,ab;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    a1 = 2*(x2-x1);
    b1 = 2*(y2-y1);
    c1 = (x1 * x1) - (x2 * x2) + (y1 * y1) - (y2 * y2);
    a2 = 2*(x3 - x1);
    b2 = 2*(y3 - y1);
    c2 = (x1 * x1) - (x3 * x3) + (y1 * y1) - (y3 * y3);
    x = ((b1*c2) - (b2 * c1))/((a1 * b2) - (a2 * b1));
    y = ((c1*a2) - (c2 * a1))/((a1 * b2) - (a2 * b1));
    ab = sqrt(((x2 - x) * (x2 - x)) + ((y2 - y) * (y2 - y)));
    cout << fixed << setprecision(3) << x <<" "<< y <<" "<< ab << endl;
  }
}
  
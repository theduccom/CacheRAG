#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

double calc_coefficient(double a,double b,double c) {
  return a*a * (b*b + c*c - a*a);
}
double calc_edge(double x1,double y1,double x2,double y2) {
  return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
double calc_surface(double a,double b,double c) {
  double s = (a + b + c) / 2.0;
  return s * (s-a) * (s-b) * (s-c);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.precision(3);
  cout.setf(ios::fixed);

  int n;
  cin >> n;
  while(n--) {
    double x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double a = calc_edge(x2,y2,x3,y3);
    double b = calc_edge(x3,y3,x1,y1);
    double c = calc_edge(x1,y1,x2,y2);

    double px = calc_coefficient(a,b,c)*x1 + calc_coefficient(b,c,a)*x2 + calc_coefficient(c,a,b)*x3;
    px = px / (16 * calc_surface(a,b,c));
    double py = calc_coefficient(a,b,c)*y1 + calc_coefficient(b,c,a)*y2 + calc_coefficient(c,a,b)*y3;
    py = py / (16 * calc_surface(a,b,c));
    cout << px << " " << py << " " <<  calc_edge(px,py,x1,y1) << endl;
  }


}
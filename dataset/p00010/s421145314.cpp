#include<iostream>
#include<string>
#include<sstream>
#include<cmath>
using namespace std;

double fpx(double a, double b, double c, double d, double e, double f);
double fpy(double a, double b, double c, double d, double e, double f);
double  fr(double a, double b, double c, double d);
string toStr(double a);
string intToString(int a);

int main() {
  int n;
  double x1, y1, x2, y2, x3, y3;

  cin >> n;
  
  for (int i = 0; i < n; i++) {
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double px = fpx(x1, y1, x2, y2, x3, y3);
    double py = fpy(x1, y1, x2, y2, x3, y3);
    double  r =  fr(x1, y1, px, py);

    cout << toStr(px) << " " << toStr(py) << " " << toStr(r) << endl;
  }
}


double fpx(double x1, double y1, double x2, double y2, double x3, double y3) {
  double a1, a2, b1, b2, c1, c2;

  a1 = 2 * (x2 - x1);
  b1 = 2 * (y2 - y1);
  c1 = x1 * x1 - x2 * x2 + y1 * y1 - y2 * y2;

  a2 = 2 * (x3 - x1);
  b2 = 2 * (y3 - y1);
  c2 = x1 * x1 - x3 * x3 + y1 * y1 - y3 * y3;

  return (b1 * c2 - b2 * c1) / (a1 * b2 - a2 * b1);
}

double fpy(double x1, double y1, double x2, double y2, double x3, double y3) {
  double a1, a2, b1, b2, c1, c2;

  a1 = 2 * (x2 - x1);
  b1 = 2 * (y2 - y1);
  c1 = x1 * x1 - x2 * x2 + y1 * y1 - y2 * y2;

  a2 = 2 * (x3 - x1);
  b2 = 2 * (y3 - y1);
  c2 = x1 * x1 - x3 * x3 + y1 * y1 - y3 * y3;

  return (c1 * a2 - c2 * a1) / (a1 * b2 - a2 * b1);
}

double fr(double x1, double y1, double x2, double y2) {
  return sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
}

string toStr(double d) {
  string pm = "", val = "";
  if (d < 0) {
    pm = "-";
    d = -d;
  }

  int ipart = (int)d;
  int fpart = (int)( (d - (double)ipart) * 10000) + 10005;

  val = pm + intToString(ipart) + "." + intToString(fpart).substr(1, 3);
  return val;
}

string intToString(int n) {
  stringstream ss;
  ss << n;
  return ss.str();
}
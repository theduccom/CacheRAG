#include <iostream>
#include <cstdio>
#include <cmath>
#include <complex>
using namespace std;

typedef complex<double> P;
#define PI 3.14159265358979
#define EPS (1e-10)
#define X real()
#define Y imag()

class Triangle{
  private:
    P a, b, c;
    double edgeA, edgeB, edgeC;
    double angleA, angleB, angleC;
    
    double LawOfCosines(double a, double b, double c){
      return acos((b*b + c*c - a*a) / (2.0*b*c));
    }
    
    bool equal(double a, double b){
      return (abs(a - b) < EPS) ? true : false;
    }
  
  public:
    Triangle(P p1, P p2, P p3){
      a = p1; b = p2; c = p3;
      edgeB = abs(c - a);
      edgeC = abs(a - b);
      edgeA = abs(b - c);
      angleA = LawOfCosines(edgeA, edgeB, edgeC);
      angleB = LawOfCosines(edgeB, edgeC, edgeA);
      angleC = LawOfCosines(edgeC, edgeA, edgeB);
    }
    
    double circumscribedCircleRedius(){
      return (edgeA / sin(angleA) / 2.0);
    }
    
    double circumscribedCircleX(){
      double A = sin(2.0*angleA);
      double B = sin(2.0*angleB);
      double C = sin(2.0*angleC);
      return ((a.X*A + b.X*B + c.X*C) / (A + B + C));
    }
    
    double circumscribedCircleY(){
      double A = sin(2.0*angleA);
      double B = sin(2.0*angleB);
      double C = sin(2.0*angleC);
      return ((a.Y*A + b.Y*B + c.Y*C) / (A + B + C));
    }
};

int main(void){
  int n;
  double x1, x2, x3, y1, y2, y3;
  double r, xp, yp;

  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    P a(x1, y1);
    P b(x2, y2);
    P c(x3, y3);
    Triangle Tr(a, b, c);
    r = Tr.circumscribedCircleRedius();
    xp = Tr.circumscribedCircleX();
    yp = Tr.circumscribedCircleY();
    printf("%.3lf %.3lf %.3lf\n", xp, yp, r);
  }
  return 0;
}
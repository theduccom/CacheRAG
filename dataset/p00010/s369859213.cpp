#include <iostream>
#include <cmath>
#include <complex>
using namespace std;

typedef complex<double> P;
#define X real()
#define Y imag()

#define PI 3.14159265358979


class Triangle{
    P a, b, c;
    double edgeA, edgeB, edgeC;
    double angleA, angleB, angleC;
    double LawOfCosines(double a, double b, double c){
        return acos((b*b+c*c-a*a) / (2.0*b*c));
    }

public:
    Triangle(P p1, P p2, P p3){
        a = p1;
        b = p2;
        c = p3;

        edgeB = abs(c-a);
        edgeA = abs(b-c);
        edgeC = abs(a-b);
        angleA = LawOfCosines(edgeA, edgeB, edgeC);
        angleB = LawOfCosines(edgeB, edgeC, edgeA);
        angleC = LawOfCosines(edgeC, edgeA, edgeB);
    }

    double circumscribedCircleRadius(){
        return (edgeA / sin(angleA) / 2.0);
    }

    double circumscribedCircleX(){
        double A = sin(2.0*angleA);
        double B = sin(2.0*angleB);
        double C = sin(2.0*angleC);

        return ((a.X*A + b.X*B + c.X*C) / (A+B+C));
    }
    double circumscribedCircleY(){
        double A = sin(2.0*angleA);
        double B = sin(2.0*angleB);
        double C = sin(2.0*angleC);

        return ((a.Y*A + b.Y*B + c.Y*C) / (A+B+C));
    }
};

int main(){
    int n;
    double x1, x2, x3;
    double y1, y2, y3;

    cin >> n;

    for(int i=1; i<=n; i++){
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        P a(x1, y1);
        P b(x2, y2);
        P c(x3, y3);

        Triangle hoge(a, b, c);
        double r = hoge. circumscribedCircleRadius();

        printf("%.3f %.3f %.3f\n", hoge.circumscribedCircleX(), hoge.circumscribedCircleY(),hoge.circumscribedCircleRadius());
    }

    return 0;
}
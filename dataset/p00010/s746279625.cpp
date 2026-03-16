#include <cmath>
#include <iostream>
#include <iomanip>

struct TPoint
{
    double x;
    double y;
};
struct TTriangle
{
    TPoint p1;
    TPoint p2;
    TPoint p3;
};
void SolveEquation(double a, double b, double c, double d, double e, double f, double* x, double* y)
{

    if(b){
        *x = (c * e - b * f) / (a * e - b * d);
        *y = (c - a * *x) / b;
    }else{
        *y = (f - d * c / a)/( e - d * b / a);
        *x = (c - b * *y) / a;
    }
}
/*
A(a, b) B(c, d) C(e, f)
(OA)^2 = (OB)^2
(OA)^2 = (OC)^2
x2-2ax+a2 + y2-2by+b2 = x2-2cx+c2 + y2-2dy+d2
(2c-2a)x + (2d-2b)y = c^2 + d^2 - a^2 - b^2;

x2-2ax+a2 + y2-2by+b2 = x2-2ex+e2 + y2-2fy+f2
(2e-2a)x + (2f-2b)y = e^2 + f^2 - a^2 - d^2
*/
TPoint GetCentral(const TTriangle& Tri)
{
    double a, b, c, d, e, f;
    a = 2 * (Tri.p2.x - Tri.p1.x);
    b = 2 * (Tri.p2.y - Tri.p1.y);
    c = std::pow(Tri.p2.x,2) + std::pow(Tri.p2.y,2) - std::pow(Tri.p1.x,2) - std::pow(Tri.p1.y,2);
    d = 2 * (Tri.p3.x - Tri.p1.x);
    e = 2 * (Tri.p3.y - Tri.p1.y);
    f = std::pow(Tri.p3.x,2) + std::pow(Tri.p3.y,2) - std::pow(Tri.p1.x,2) - std::pow(Tri.p1.y,2);
    TPoint P;
    SolveEquation(a, b, c, d, e, f, &P.x, &P.y);
    return P;
}
double GetLength(const TPoint& A, const TPoint& B)
{
    return std::sqrt(std::pow(A.x - B.x, 2) + std::pow(A.y - B.y, 2));
    // return std::sqrt((A.x - B.x)*(A.x - B.x) + (A.y - B.y)*(A.y - B.y));
}
double GetRadius(double a, double b, double c)
{
    return (a*b*c)/std::sqrt((a+b+c)*(-a+b+c)*(a-b+c)*(a+b-c));
}
double GetRadius(const TTriangle& Tri)
{
    double a = GetLength(Tri.p1, Tri.p2);
    double b = GetLength(Tri.p2, Tri.p3);
    double c = GetLength(Tri.p3, Tri.p1);
    return GetRadius(a, b, c);
}
int main()
{
    int n;
    std::cin >> n;
    for(int i = 0; i < n; ++i){
        // double a, b, c;
        // std::cin >> a >> b >> c;
        // std::cout << GetRadius(a, b, c) << std::endl;
        
        TTriangle tri;
        std::cin >> tri.p1.x >> tri.p1.y >> tri.p2.x >> tri.p2.y >> tri.p3.x >> tri.p3.y;
        TPoint C = GetCentral(tri);
        double r = GetRadius(tri);
        if(C.x == -0) C.x = 0;
        if(C.y == -0) C.y = 0;
        if(r   == -0) r   = 0;
        std::cout << std::fixed << std::setprecision(3);
        std::cout << C.x << " " << C.y << " " << r << std::endl;
    }
    return 0;
}
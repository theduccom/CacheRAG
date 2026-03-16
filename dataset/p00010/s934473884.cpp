#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <numeric>
#include <climits>
#include <cfloat>
using namespace std;

double const EPS = 1.0e-10;

class Point
{
public:
    double y, x;
    Point(){
        y = x = 0.0;
    }
    Point(double y0, double x0){
        y = y0;
        x = x0;
    }
    double dist(const Point& p) const{
        return sqrt(pow(y - p.y, 2) + pow(x - p.x, 2));
    }
    Point operator/(double a) const{
        return Point(y / a, x / a);
    }
};

class Line
{
public:
    double a, b, c; // a*x + b*y + c = 0
    Line(double a0, double b0, double c0){
        a = a0;
        b = b0;
        c = c0;
    }
};

Line perpendicularBisector(const Point& p1, const Point& p2)
{
    return Line(p2.x-p1.x, p2.y-p1.y, (p1.y*p1.y + p1.x*p1.x - p2.y*p2.y - p2.x*p2.x) / 2);
}

bool linesIntersection(const Line& l1, const Line& l2, Point& intersection)
{
    double s = l1.a*l2.b - l2.a*l1.b;
    if(abs(s) < EPS)
        return false;

    intersection = Point(l2.a*l1.c - l1.a*l2.c, l1.b*l2.c - l2.b*l1.c) / s;
    return true;
}

int main()
{
    int n;
    cin >> n;

    while(--n >= 0){
        Point p1, p2, p3;
        cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y;

        Line l1 = perpendicularBisector(p1, p2);
        Line l2 = perpendicularBisector(p2, p3);
        Point p;
        linesIntersection(l1, l2, p);

        printf("%.3f %.3f %.3f\n", p.x, p.y, p.dist(p1));
    }

    return 0;
}
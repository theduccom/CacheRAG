#include <bits/stdc++.h>
#define REP(i,n) for(int i=0; i<(int)(n); ++i)

using namespace std;


typedef complex<double> Point;
const double EPS = 1e-8;
typedef vector<Point> Polygon;
Point curr(const Polygon& a, int x){ return a[x]; }
Point next(const Polygon& a, int x){ return a[(x + 1) % a.size()]; }
double cross(Point a, Point b){
    return imag(conj(a) * b);
}
double area(const Polygon& P) {
    double A = 0;
    for(int i = 0; i < P.size(); i++){
        A += cross(curr(P, i), next(P, i));
    }
    return abs(A) / 2.0;
}


int main(){
    double x, y;
    Polygon P;
    while(scanf("%lf,%lf", &x, &y) != EOF){
        P.push_back(Point(x, y));
    }
    printf("%.12f\n", area(P));
    return 0;
}
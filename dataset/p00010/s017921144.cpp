#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <set>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()

const double ERR = 1e-9;

typedef pair<double, double> XY;

XY solveeq(double a, double b, double c, double d, double e, double f) {
    double x, y;
    x = (c*e - b*f)/(a*e - b*d);
    y = (a*f - c*d)/(a*e - b*d);
    return make_pair(x,y);
}

XY getcenter(double x1, double y1, double x2, double y2, double x3, double y3) {
    return solveeq((x2-x1)/(y2-y1+ERR), 1, (x2*x2-x1*x1)/2/(y2-y1+ERR)+(y1+y2)/2, (x3-x2)/(y3-y2+ERR), 1, (x3*x3-x2*x2)/2/(y3-y2+ERR)+(y2+y3)/2);
}

double getradius(XY center, double x1, double y1) {
    return sqrt((x1-center.first)*(x1-center.first) + (y1-center.second)*(y1-center.second));
}

int main() {
    double x1,y1,x2,y2,x3,y3;
    int n;
    cin >> n;
    REP(i,n) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        XY center = getcenter(x1, y1, x2, y2, x3, y3);
        double radius = getradius(center, x1, y1);
        printf("%.3f %.3f %.3f\n", center.first+ERR, center.second+ERR, radius+ERR);
    }
    return 0;
}
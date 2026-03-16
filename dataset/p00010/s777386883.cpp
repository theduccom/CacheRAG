#define _USE_MATH_DEFINES

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>

using namespace std;

typedef pair<long long int, long long int> P;
long long int INF = 1e18;
int main()
{
    const double EPS = 1.0e-10;
    double a,b,c,d,e,f;
    double x1,x2,x3,y1,y2,y3;
    double x,y;
    int n;
	cin >> n;
    for(int i = 0; i < n; i++){
    	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        a = x1 - x2;
        b = y1 - y2;
        c = (x1 * x1 + y1 * y1 - x2 * x2 - y2 * y2) / 2;
        d = x1 - x3;
        e = y1 - y3;
        f = (x1 * x1 + y1 * y1 - x3 * x3 - y3 * y3) / 2;
        x = (e * c - b * f) / (a * e - b * d);
        y = (a * f - d * c) / (a * e - b * d);
        if(-0.0005 < x && x < 0.0+EPS) x = 0.0;
        if(-0.0005 < y && y < 0.0+EPS) y = 0.0;
 
        printf("%.3f %.3f %.3f\n",x,y,sqrt((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y)));
    }
    return 0;
}

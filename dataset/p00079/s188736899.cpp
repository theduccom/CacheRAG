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

class Point
{
public:
    double x, y;
    double length(const Point& p) const{
        return sqrt(pow(x - p.x, 2.0) + pow(y - p.y, 2.0));
    }
};

int main()
{
    double s = 0;
    Point p1, p2;
    char c;
    cin >> p1.x >> c >> p1.y >> p2.x >> c >> p2.y;

    for(;;){
        Point p3;
        if(!(cin >> p3.x >> c >> p3.y))
            break;
        double a = p1.length(p2);
        double b = p2.length(p3);
        double c = p3.length(p1);
        double z = (a + b + c) / 2;
        s += sqrt(z * (z-a) * (z-b) * (z-c));

        p2 = p3;
    }

    printf("%.10f\n", s);
}
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

typedef struct
{
    double x;
    double y;
}T_Point;

double calcTriangleArea(T_Point pt1, T_Point pt2, T_Point pt3);

int main()
{
    double in_x;
    double in_y;
    char ch; /* dummy */
    double s = 0;
    vector<T_Point> points;
    while(cin >> in_x >> ch >> in_y)
    {
        T_Point pt;
        pt.x = in_x;
        pt.y = in_y;
        points.push_back(pt);
    }
    for(int i=0; i<points.size()-2; i++)
    {
        s += calcTriangleArea(points[0], points[i + 1], points[i + 2]);
    }
    cout << fixed << std::setprecision(6) << s << endl;
    return 0;
}

double calcTriangleArea(T_Point pt1, T_Point pt2, T_Point pt3)
{
    double a = hypot(pt2.x - pt1.x, pt2.y - pt1.y);
    double b = hypot(pt3.x - pt2.x, pt3.y - pt2.y);
    double c = hypot(pt1.x - pt3.x, pt1.y - pt3.y);
    double z = (a + b + c) / 2;
    return sqrt(z * (z - a) * (z - b) * (z - c));
}


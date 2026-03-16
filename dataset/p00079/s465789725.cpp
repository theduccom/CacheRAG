#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

const double EPS=1e-10;
const double INF=1e10;

// 点オブジェクト
// ベクトルを表すのにも使う
struct Point {
    double x, y;
    Point(double x=0, double y=0) : x(x), y(y) {}
    double distance (const Point &o) const {
        return sqrt((x - o.x) * (x - o.x) + (y - o.y) * (y - o.y));
    }

    Point operator+(const Point &o) const {
        return Point(x+o.x, y+o.y);
    }

    Point operator-(const Point &o) const {
        return Point(x-o.x, y-o.y);
    }

    Point operator*(const double m) const {
        return Point(x*m, y*m);
    }

    // 外積
    double cross(const Point &o) const {
        return x * o.y - y * o.x;
    }

    // 内積
    double dot(const Point &o) const {
        return x * o.x + y * o.y;
    }

    // ベクトルがx軸となす角
    double atan() const {
        return atan2(y, x);
    }

    // ベクトルの長さの二乗
    double norm() const {
        return dot(*this);
    }
};

// 点の進行方向
// 戻り値:
//     +1: 反時計回り
//     -1: 時計回り
//     +2: c, a, bの順に一直線上
//     -2: a, b, cの順に一直線上
//      0: a, c, bの順に一直線上
int ccw(Point a, Point b, Point c) {
    b = b-a, c = c-a;
    if (b.cross(c) > EPS) return +1; 
    if (b.cross(c) < -EPS) return -1;
    if (b.dot(c) < 0) return +2;
    if (b.norm() < c.norm()) return -2;
    return 0;
}

// 多角形
struct Polygon {
    vector<Point> vertex;

    Polygon() {}
    Polygon(vector<Point> vertex) : vertex(vertex) {}

    inline void add_vertex(Point v) {
        vertex.push_back(v);
    }

    Point next(int v) const {
        return vertex[(v+1) % vertex.size()];
    }
    Point prev(int v) const {
        return vertex[(v-1+vertex.size()) % vertex.size()];
    }

    double area() const {
        double ret = 0;
        for (int i = 0; i < vertex.size(); i++) {
            ret += vertex[i].cross(next(i));
        }
        return abs(ret) * 0.5;
    }
};

int main() {
    double x, y;
    char d;
    Polygon p;
    while (cin >> x >> d >> y) {
        p.add_vertex(Point(x, y));
    }
    printf("%.8f\n", p.area());
    return 0;
}
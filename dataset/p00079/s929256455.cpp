#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

double heron(double a, double b, double c) {
    double z = (a + b + c) / 2.0;
    return sqrt(z * (z - a) * (z - b) * (z - c));
}

double dist(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main() {
    vector<double> x, y;
    double tx, ty;
    char c;
    while (cin >> tx >> c >> ty) {
        x.push_back(tx);
        y.push_back(ty);
    }
    double area = 0;
    for (int i=1; i+1<(int)x.size(); ++i) {
        double a = dist(x[0], y[0], x[i], y[i]);
        double b = dist(x[0], y[0], x[i+1], y[i+1]);
        double c = dist(x[i], y[i], x[i+1], y[i+1]);
        area += heron(a, b, c);
    }
    cout.width(6);
    cout << fixed;
    cout << area << endl;
    return 0;
}
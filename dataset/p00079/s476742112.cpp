#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int INF = 1000000000;
#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);i++)
#define rep(i,n) REP(i, 0, n)

typedef complex<double> Point;
double cross(const Point& a, const Point& b){
    return (conj(a) * b).imag();
}
int main() {
    vector<Point> poly;
    double x_, y_;
    char gomi;
    cin.tie(0); ios::sync_with_stdio(false);
    while(cin >> x_ >> gomi >>  y_) poly.push_back(Point(x_, y_));
//    rep(i, 5) {
//      cin >> x_ >> gomi >>  y_;
//      poly.push_back(Point(x_, y_));}
    double sum = 0.0;
    REP(i, 1, poly.size() - 1)
      sum += cross(poly[i] - poly[0], poly[i + 1] - poly[0]) / 2.0;
    cout << fixed << setprecision(10) << abs(sum) << endl;
    return 0;
}
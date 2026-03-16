#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int INF = 1000000000;
#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);i++)
#define rep(i,n) REP(i, 0, n)
typedef complex<double> Point;
const double EPS = 1.0e-9;
const double PI = acos(-1);
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int test; cin >> test;
    rep(casenum, test){
        Point a, b, c, m1, m2, d1, d2;
        cin >> a.real() >> a.imag() >> b.real() >> b.imag() >> c.real() >> c.imag();
        m1 = (a + b) / 2.0, m2 = (b + c) / 2.0;//????????¨???????????????, ????????¨????????????
        double s1 = arg(b - a) + PI / 2.0, s2 = arg(c - b) + PI / 2.0;//?????¨??´???????????????
        d1 = polar(1.0, s1), d2 = polar(1.0, s2);
        double k = (d1.real() * m1.imag() + d1.imag() * m2.real() - m1.real() * d1.imag() - d1.real() * m2.imag()) / (d1.real() * d2.imag() - d2.real() * d1.imag());
        double x = m2.real() + k * d2.real();
        double y = m2.imag() + k * d2.imag();
        double r = abs(Point(x, y) - a);
        printf("%.3lf %.3lf %.3lf\n", x, y, r);
    }
    return 0;
}
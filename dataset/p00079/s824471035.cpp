// J4180449 三宅亮輔
// 問題名
// - Area of Polygon
// 問題URL
// - https://onlinejudge.u-aizu.ac.jp/problems/0079
// 所要時間
// -
// 学んだこと
//
//
//

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<double, double> P;

int n;

vector<P> p;

double nijo(double a) { return a * a; }

double dist(P a, P b) {
    return sqrt(nijo(a.first - b.first) + nijo(a.second - b.second));
}

double calc(P a, P b, P c) {
    double x = dist(a, b);
    double y = dist(b, c);
    double z = dist(c, a);
    double s = (x + y + z) / 2;

    return sqrt(s * abs(s - x) * abs(s - y) * abs(s - z));
}

int main() {
    double x, y;
    string s;
    while(cin >> s) {
        int id = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == ',')
                id = i;
        }

        double x = stod(s.substr(0, id));
        double y = stod(s.substr(id + 1, s.size() - id - 1));

        p.push_back(P(x, y));
        n++;
    }

    double ans = 0;
    for(int i = 1; i + 1 < n; i++) {
        ans += calc(p[0], p[i], p[i + 1]);
    }
    cout << ans << endl;
}


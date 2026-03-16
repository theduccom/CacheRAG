// 問題名: Railway Connection
// URL: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1182&lang=jp
// 所要時間: 100分
// --感想--
// 初めに(現在いる頂点, 直前まで使っていた鉄道会社, その鉄道会社の路線でここまで乗ってきた距離)の組を状態としてダイクストラ法で
// 運賃を最小化する方針で実装したが、時間計算量、空間計算量ともに少し厳しかった。同じ会社の鉄道に乗り続けるほど安くなることから、
// 同じ会社の鉄道の途中で一度降りてまたすぐに乗るような行動も認めてしまっても答えは変わらなく、こう考えて前処理をすると状態を
// 決めるのが頂点だけになることに中々気づけなかった。制約なども見て適切な解法を選択できるようにしたい。

#include <bits/stdc++.h>
using namespace std;

typedef complex<double> point;

// 内積
double dot(point a, point b) { return (conj(a) * b).real(); }
// 外積(符号付き面積の2倍)
double cross(point a, point b) { return (conj(a) * b).imag(); }

#define pb(x) push_back(x)
#define mp(a, b) make_pair(a, b)

int main(){
    vector<point> v;
    double x, y;
    while (scanf("%lf,%lf",&x,&y) != EOF)
        v.pb(point(x,y));
    int n = v.size();
    double ans = 0;
    for (int i = 0; i + 2 < n;i++)
        ans += cross(v[i + 1] - v[0], v[i + 2] - v[0]) / 2;
    cout << setprecision(10) << abs(ans) << endl;
}

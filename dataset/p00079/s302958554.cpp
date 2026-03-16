// start: 23:15
#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>

#define REP(i, n) for ( int i = 0; i < n; i++ )

using namespace std;

typedef pair<double, double> xy;

// 三角形の面積を求める
double triangle(double x1, double y1, double x2, double y2, double x3, double y3) {
    // 正規化（ベクトルに変換）
    // 掛け算
    // 1/2
    double  v1x = x3 - x1,
            v1y = y3 - y1,
            v2x = x2 - x1,
            v2y = y2 - y1;
    return 0.5 * abs(v1x * v2y - v1y * v2x);
}

// 多角形の面積を求める
double polygon(int edge, vector<xy> points) {
    double sum = 0.0;
    xy base = points[0];
    for ( int i = 1; i < edge - 1; i++ ) {
        xy  p1 = points[i],
            p2 = points[i+1];
        sum += triangle(base.first, base.second, p1.first, p1.second, p2.first, p2.second);
    }
    return sum;
}


int main() {
    vector<xy> ps(21);

    int i = 0;
    double x, y;

    // EOFまで入力
    while(scanf("%lf,%lf", &x, &y) != EOF) ps[i++] = make_pair(x, y);

    // 小数点6桁まで出力
    printf("%.6f\n", polygon(i, ps));

    return 0;
}
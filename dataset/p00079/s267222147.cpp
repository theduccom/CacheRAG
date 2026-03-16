#include <complex>
#include <iostream>
#include <cmath>
using namespace std;
typedef complex<double> xy_t;
xy_t P[110];
int main() {
  // 入力例 読み込んだ点の個数を N とする
  int N=0;
  double x, y;
  while (scanf("%lf,%lf", &x, &y) != EOF) {
    P[N++] = xy_t(x,y);
  }
  // 面積計算
  double sum = 0.0;
  for (int i=0; i+2<N; ++i) {
    xy_t a=P[0], b=P[i+1], c=P[i+2];
    double a_ = abs(a - b);
    double b_ = abs(b - c);
    double c_ = abs(c - a);
    double z = (a_ + b_ + c_) / 2.0;
    sum += sqrt(z * (z - a_) * (z - b_) * (z - c_));
  }
  printf("%.6f\n", sum);
}

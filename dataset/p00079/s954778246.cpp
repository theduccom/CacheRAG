#include <complex>
#include <cmath>
#include <iostream>
using namespace std;

typedef complex<double> xy_t;
xy_t P[110];

int main() {
  //入力例　読み込んだ点の個数をNとする
  int N = 0;
  double x,y;
  while (~scanf("%lf,%lf", &x, &y)) {
    P[N++] = xy_t(x,y);
	}
	//面積計算
	double sum = 0.0;
	for (int i = 0; i+2 < N; ++i) {
	  xy_t a = P[0], b = P[i+1], c = P[i+2];
	  xy_t ab = P[i+1] - P[0], bc = P[i+2] - P[i+1], ca = P[0] - P[i+2];
	  double z = (abs(ab) + abs(bc) + abs(ca))/2;
	  double s = sqrt(z*(z-abs(ab))*(z-abs(bc))*(z-abs(ca)));
	  sum += s;
	  }
	printf("%.6f\n", abs(sum));
}

/* 自分のMac環境ではコンパイルも通り、正しい答えが出力されるのですがオンラインジャッジではコンパイルエラーになってしまいます。どうしてでしょうか? */
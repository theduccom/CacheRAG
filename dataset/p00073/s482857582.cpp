
// 正四角錐の表面積の公式
// 底辺＊√（４＊高さ＊高さ＋底辺＊底辺）＋底辺＊底辺

#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main(void){

  double x,h;
  while( cin >> x >> h , x || h ){
    double ans = x * sqrt( 4 * h * h + x * x ) + x * x;
    printf("%.6f", ans);
    cout << endl;

  }
  return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
#include <map>
#include <functional>
#include <cmath>
#include <cstdio>
using namespace std;

int main(){
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    double x1, y1, x2, y2, x3, y3, x, y;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    x = ((y1-y3) * (y1 * y1 -y2 * y2 +x1 * x1 -x2 * x2) -(y1-y2) * (y1 * y1 -y3 * y3 +x1 * x1 -x3 * x3)) / (2 * (y1-y3) * (x1-x2)-2 * (y1-y2) * (x1-x3));
    y = ((x1-x3) * (x1 * x1 -x2 * x2 +y1 * y1 -y2 * y2) -(x1-x2) * (x1 * x1 -x3 * x3 +y1 * y1 -y3 * y3)) / (2 * (x1-x3) * (y1-y2)-2 * (x1-x2) * (y1-y3));
    double r;
    r = sqrt(pow(x - x1, 2) + pow(y - y1, 2));
    printf("%.3f %.3f %.3f\n", x, y, r);
  }
}
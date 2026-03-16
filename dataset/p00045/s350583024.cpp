#include <iostream>
#include <cstdio>
using namespace std;

int main(void){
  int sum = 0, p, n, cnt = 0;
  double ave = 0.0;
  while(scanf("%d,%d", &p, &n) != EOF){
    sum += p * n;
    cnt++;
    ave += n;
  }
  ave /= cnt;
  cout << sum << endl;
  cout << (int)(ave + 0.5) << endl;
  return 0;
}
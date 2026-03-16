#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){

  int value, n, cnt, sum_v, sum_n;
  double ave;

  cnt = 0;
  sum_v = 0;
  sum_n = 0;
  while(scanf("%d, %d", &value, &n) != EOF){
    sum_v += value * n;
    sum_n += n;
    cnt++;
  }

  ave = round((double)sum_n / cnt);

  cout << sum_v << endl << ave << endl;

  return 0;

}
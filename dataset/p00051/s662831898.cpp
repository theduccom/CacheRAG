#include <iostream>
#include <algorithm>
using namespace std;
#define N 10000000;
int main(void)
{
  int n;
  int in;
  int num[8];
  int max, min;
  int keta=N;

  cin >> n;
  for(int a = 0 ; a < n ; a++) {
    cin >> in;
    
    num[0] = in / 10000000;
    in -= num[0] * 10000000;
    num[1] = in / 1000000;
    in -= num[1] * 1000000;
    num[2] = in / 100000;
    in -= num[2] * 100000;
    num[3] = in / 10000;
    in -= num[3] * 10000;
    num[4] = in / 1000;
    in -= num[4] * 1000;
    num[5] = in / 100;
    in -= num[5] * 100;
    num[6] = in / 10;
    in -= num[6] * 10;
    num[7] = in;

    keta = N;
    sort(num, num+8);
    for(int i = 0 ; i < 8 ; i++) {
      min += num[i] * keta;
      keta /= 10;
    }
    keta = N;
    for(int i = 7 ; i >= 0 ; i--) {
      max += num[i] * keta;
      keta /= 10;
    }
    cout << max - min << endl;
    max = 0; min = 0;
  }
  return 0;
}
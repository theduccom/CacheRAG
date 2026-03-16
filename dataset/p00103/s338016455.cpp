#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int n = 0, tmp0 = 0, tmp1 = 0;
  int HB = 0, out = 0, point = 0;
  string str;
  scanf("%d", &n);
  // for(tmp0=0;tmp0<3;tmp0++) HB[tmp0]=0;
  while (n) {
    point = 0, HB = 0, out = 0;
    while (out < 3) {
      cin >> str;
      if (str=="OUT") out++;
      else if (str=="HIT") {
        HB++;
        if (HB==4) {
          HB--;
          point++;
        }
      } else if (str=="HOMERUN") {
        point += HB + 1;
        HB = 0;
      }
    }
    printf("%d\n", point);
    n--;
  }
  return 0;
}
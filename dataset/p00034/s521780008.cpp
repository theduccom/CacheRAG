#include <bits/stdc++.h>
using namespace std;

int main()
{
  int l[10], v1, v2;
  int len;

  while (scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", l, &l[1], &l[2], &l[3], &l[4], &l[5], &l[6], &l[7], &l[8], &l[9], &v1, &v2) != EOF){
    len = 0;
    for (int i = 0; i < 10; i++){
      len += l[i];
    }
    double t = (double)len / (v1 + v2);
    double d = (double)v1 * t;
    len = 0;
    for (int i = 0; i < 10; i++){
      len += l[i];
      if (d <= len){
        cout << i + 1 << endl;
        break;
      }
    }
  }
}
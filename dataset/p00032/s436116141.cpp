#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  int s1, s2, d;
  int rec_num = 0;
  int loz_num = 0;
  while (scanf("%d,%d,%d\n", &s1, &s2, &d) != EOF) {
    if (s1*s1+s2*s2==d*d) {
      rec_num++;
      continue;
    } else if (s1==s2) {
      loz_num++;
    }
  }
  cout << rec_num << endl;
  cout << loz_num << endl;
      
  return 0;
}
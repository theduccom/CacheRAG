#include <iostream>
#include <cstdio>
#include <cstring>

#define MAX_N 100

using namespace std;

int main() {
  int count = 0;
  char s[MAX_N + 1];
  
  while (~scanf("%s\n", s)) {
    int len = strlen(s);
    if (len == 1) count++;
    else {
      bool flag = true;
      int center = len / 2 + len % 2;
      for (int i = 0; i < center && flag; i++) {
        if (s[i] != s[len-i-1]) flag = false;
      }
      if (flag) count++;
    }
  }
  printf("%d\n", count);
  return 0;
}
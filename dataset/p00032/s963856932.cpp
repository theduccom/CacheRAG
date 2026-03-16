#include<cstdio>
using namespace std;

int main() {
  int a,b,c;
  int rec = 0,hy = 0;
  while(~scanf("%d", &a)) {
    scanf(",%d,%d", &b, &c);
    if(a == b) hy++;
    if(a*a + b*b == c*c) rec++;
  }

  printf("%d\n%d\n", rec, hy);
}
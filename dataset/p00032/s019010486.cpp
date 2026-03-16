#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  int choho = 0;
  int hishi = 0;
  while(scanf("%d,%d,%d", &a, &b, &c) != EOF) {
    if(a == b) hishi++;
    if(a*a + b*b == c*c) choho++;
  }

  cout << choho << endl;
  cout << hishi << endl;
  return 0;
}
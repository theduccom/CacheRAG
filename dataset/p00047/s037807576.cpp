#include <iostream>
#include <cstdio>
using namespace std;

main() {
  int D[3];
  D[0] = 1;
  D[1] = D[2] = 0;
  char a, b;
  while(scanf("%c,%c", &a, &b) != EOF) {
    a -= 'A';
    b -= 'A';
    int tmp = D[a];
    D[a] = D[b];
    D[b] = tmp;
  }
  for(int i = 0; i < 3; ++i) {
    if(D[i] == 1) {
      cout << (char)('A' + i) << endl;
      break;
    }
  }
}
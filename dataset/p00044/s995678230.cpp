#include <iostream>
using namespace std;

const int MAX_S = 100000;
bool p[MAX_S];


void prime() {
  fill(p, p+MAX_S, true);
  p[0] = p[1] = false;
  for(int i = 2; i < MAX_S; i++) {
    if(p[i]) {
      for(int j = 2; i*j < MAX_S; j++) {
        p[i*j] = false;
      }
    }
  }
}

int main() {
  int x;
  prime();
  while(cin >> x) {
    int n = 2;
    bool b = false;
    for(int i = 3; i < MAX_S; i++) {
      if(b && n > x) {
        cout << n << endl;
        break;
      }

      if(i == x) {
        cout << n << ' ';
        b = true;
      }

      if(p[i]) n = i;
    }
  }
}
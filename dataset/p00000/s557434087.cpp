// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0000&lang=jp

#include <iostream>
using namespace std;

int main() {
  for (auto i=1; i<=9; i++) {
    for (auto j=1; j<=9; j++) {
      cout << i << "x" << j << "=" << i*j << endl;
    }
  }
}
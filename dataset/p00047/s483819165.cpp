#include<iostream>
#include<string>

using namespace std;

int main() {
  string Ball;
  string p;

  Ball = "A";
  while(cin >> p) {
    if(p[0] == Ball[0]) {
      Ball[0] = p[2];
    }else if(p[2] == Ball[0]) {
      Ball[0] = p[0];
    }
  }

  cout << Ball[0] << endl;

  return 0;
}
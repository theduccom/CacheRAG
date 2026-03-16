#include<iostream>
#include<string>

using namespace std;

int main() {
  int a = 1, b = 2, c = 3;
  string s;
  while (cin >> s) {
    if (s == "A,B") {
      int tmp = a;
      a = b;
      b = tmp;
    } else if (s == "A,C") {
      int tmp = a;
      a = c;
      c = tmp;
    } else if (s == "B,A") {
      int tmp = b;
      b = a;
      a = tmp;
    } else if (s == "B,C") {
      int tmp = b;
      b = c;
      c = tmp;
  } else if (s == "C,A") {
    int tmp = c;
    c = a;
    a = tmp;
} else if (s == "C,B") {
  int tmp = c;
  c = b;
  b = tmp;
}
}
if (a == 1) {
  cout << "A" << endl;
} else if (b == 1) {
  cout << "B" << endl;
} else if (c == 1) {
  cout << "C" << endl;
}
return 0;
}


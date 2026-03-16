#include <iostream>
#include <string>
using namespace std;

int calc1();
int calc2();
int calc3();

int p;
string eq;

int calc1() {
  int a = calc2();
  while (eq[p]=='+' || eq[p]=='-') {
    if (eq[p]=='+') {
      p++;
      a += calc2();
    } else if (eq[p]=='-') {
      p++;
      a -= calc2();
    }
  }
  return a;
}

int calc2() {
  int a = calc3();
  while (eq[p]=='*' || eq[p]=='/') {
    if (eq[p]=='*') {
      p++;
      a *= calc3();
    } else if (eq[p]=='/') {
      p++;
      a /= calc3();
    }
  }
  return a;
}

int calc3() {
  int a;
  if (eq[p]=='(') {
    p++;
    a = calc1();
    p++;
  } else {
    a = 0;
    while (eq[p]>='0'&&eq[p]<='9') {
      a *= 10;
      a += eq[p++] - '0';
    }
  }
  return a;
}

int main() {
  int n, r;

  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> eq;
    p = 0;
    r = calc1();
    cout << r << endl;
  }
}
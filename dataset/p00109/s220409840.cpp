#include <iostream>
#include <string>
using namespace std;

int p;
string str;

int Term();
int Factor();
int Elem();
int Digit();

int Term() {
  int a = Factor();
  while (str[p] == '+' || str[p] == '-') {
    char c = str[p];
    p++; // read [+-]
    int b = Factor();
    if (c == '+') {
      a = a + b;
    } else {
      a = a - b;
    }
  }
  return a;
}

int Factor() {
  int a = Elem();
  while (str[p] == '*' || str[p] == '/') {
    char c = str[p];
    p++; // read [*/]
    int b = Elem();
    if (c == '*') {
      a = a * b;
    } else {
      a = a / b;
    }
  }
  return a;
}

int Elem() {
  if (str[p] == '(') {
    p++; // read (
    int a = Term();
    p++; // read )
    return a;
  } else {
    int a = 0;
    while (isdigit(str[p])) {
      int b = Digit();
      a = 10 * a + b;
    }
    return a;
  }
}

int Digit() {
  int a = str[p] - '0';
  p++; // read [0-9]
  return a;
};

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> str;
    p = 0;
    cout << Term() << endl;
  }
}
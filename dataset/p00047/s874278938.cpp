#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  char bnow = 'A';
  while (cin >> s) {
    if (bnow == s.at(0)) {
      bnow = s.at(2);
      continue;
    }
    if (bnow == s.at(2)) {
      bnow = s.at(0);
      continue;
    }
  }
  cout << bnow << endl;
}


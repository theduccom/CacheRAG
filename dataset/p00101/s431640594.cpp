#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();
  while( n-- ) {
    string s;
    int pos;
    getline(cin, s);
    pos = s.find("Hoshino");
    while( pos != -1 ) {
      s[pos+6] = 'a';
      pos = s.find("Hoshino");
    }

    cout << s << endl;
  }
}
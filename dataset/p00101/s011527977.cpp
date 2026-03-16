#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, idx;
  string s;

  cin >> n;
  cin.ignore();

  while(n--){

    getline(cin, s);

    while((idx = s.find("Hoshino", 0)) != string::npos){

      s[idx + 6] = 'a';

    }

    cout << s << endl;

  }

}
#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)
#define sz(obj) ((int)(obj).size())

int main()
{
  string str;
  int n;
  cin >> n;
  cin.get();
  while (n--){
    getline(cin, str);
    REP(i, sz(str) - 6){
      if (str.substr(i, 7) == "Hoshino") str.replace(i, 7, "Hoshina");
    }
    cout << str << endl;
  }
}
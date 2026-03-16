#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)
#define sz(obj) ((int)(obj).size())

int main()
{
  string str;
  getline(cin, str);

  REP(i, sz(str) - 4){
    if (str.substr(i, 5) == "apple") str.replace(i, 5, "peach");
    else if (str.substr(i, 5) == "peach") str.replace(i, 5, "apple");
  }
  cout << str << endl;
}
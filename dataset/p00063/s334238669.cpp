#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)
#define sz(obj) ((int)(obj).size())

int main()
{
  string str;
  int cnt = 0;
  while (cin >> str){
    int ccnt = 0;
    REP(i, sz(str) / 2) if (str[i] == str[sz(str) - (i + 1)]) ccnt++;
    if (ccnt == sz(str) / 2) cnt++;
  }
  cout << cnt << endl;
}
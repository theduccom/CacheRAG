#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)
#define sz(obj) ((int)(obj).size())

map<string, int> p;
int main()
{
  int a;
  char c;
  string blood;

  while (cin >> a >> c >> blood){
    p[blood]++;
  }
  cout << p["A"] << "\n" << p["B"] << "\n" << p["AB"] << "\n" << p["O"] << endl;
}
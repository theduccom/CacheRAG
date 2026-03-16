#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)

int main()
{
  int n;
  string str;
  
  cin >> n;
  while (n--){
    int out = 0, base = 0, point = 0;
    while (out < 3){
      cin >> str;
      if (str == "HIT"){
        if (base < 3) base++;
        else point++;
      }
      else if (str == "HOMERUN"){
        point += base + 1;
        base = 0;
      }
      else out++;
    }
    cout << point << endl;
  }
}
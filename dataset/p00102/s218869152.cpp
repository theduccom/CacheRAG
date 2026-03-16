#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)

int main()
{
  int n;
  while (cin >> n, n){
    int table[n][n], x[n], y[n], sum = 0;
    REP(i, n){
      REP(j, n) cin >> table[i][j];
      x[i] = y[i] = 0;
    }
    REP(i, n){
      cout << setw(5) << right << table[i][0];
      x[i] = table[i][0];
      FOR(j, 1, n){
        cout << setw(5) << right << table[i][j];
        x[i] += table[i][j];
      }
      cout << setw(5) << right << x[i] << endl;
    }
    REP(i, n){
      REP(j, n) y[i] += table[j][i];
    }
    cout << setw(5) << right << y[0];
    FOR(i, 1, n) cout << setw(5) << right << y[i];
    REP(i, n) sum += x[i];
    cout << setw(5) << right << sum << endl;
  }
}
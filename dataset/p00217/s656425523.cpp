#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;

  while (cin >> n, n){
    int p, pn, m = 0, a, b;

    for (int i = 0; i < n; i++){
      cin >> pn >> a >> b;
      if (a + b > m){
        m = a + b;
        p = pn;
      }
    }
    cout << p << ' ' << m << endl;
  }
}
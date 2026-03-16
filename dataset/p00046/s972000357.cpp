#include <bits/stdc++.h>
using namespace std;

int main()
{
  double a, ma = 0, mi = 100000000000;

  while (cin >> a){
    ma = max(a, ma);
    mi = min(a, mi);
  }
  cout << ma - mi << endl;
}
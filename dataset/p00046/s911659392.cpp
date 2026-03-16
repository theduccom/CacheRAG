#include<bits/stdc++.h>
using namespace std;

int main()
{
  double ma = 0, mi = (1<<30), data;
  while( cin >> data ) {
    ma = max(data, ma);
    mi = min(data, mi);
  }

  cout << ma - mi << endl;
}
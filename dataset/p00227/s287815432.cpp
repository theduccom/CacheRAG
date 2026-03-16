#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  int data[1001];

  while( cin >> n >> m, n+m ) {
    for(int i=0; i<n; i++) {
      cin >> data[i];
    }

    sort(data, data+n);
    int ans = 0;
    int cnt = 0;

    while( n > 0 ) {
      cnt++;
      n--;
      if( cnt == m ) {
	cnt = 0; 
	continue;
      } 
      ans += data[n];
    }

    cout << ans << endl;
  }
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a,b,c;
  cin >> a >> b >> c;
  
  if(a == 1 && b == 1 && c == 0 || a == 0 && b == 0 && c == 1){
    cout << "Open" << endl;
  } else {
    cout << "Close" << endl;
  }

  return 0;
}


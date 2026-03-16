#include <iostream>
using namespace std;
int main()
{
  int a,b,c;
  cin >> a >> b >> c;
  if(a + b == 2 && c == 0 || a + b == 0 && c == 1) cout << "Open";
  else cout << "Close";
  cout << endl;
  return 0;
}
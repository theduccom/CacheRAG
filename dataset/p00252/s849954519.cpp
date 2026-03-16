#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  if (a * b == 1 || c == 1){
    cout << "Open" << endl;
    return 0;
  }
  cout << "Close" << endl;
}
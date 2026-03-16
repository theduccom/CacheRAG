#include <string>
#include <iostream>
using namespace std;

int main()
{
  string str;
  int a, b, c, d;
  a = 1;
  b = 0;
  c = 0;
  while (cin >> str){
    if ((str[0] == 'A' && str[2] == 'B') || (str[0] == 'B' && str[2] == 'A')){
      d = a;
      a = b;
      b = d;
    }
    else if ((str[0] == 'B' && str[2] == 'C') || (str[0] == 'C' && str[2] == 'B')){
      d = b;
      b = c;
      c = d;
    }
    else {
      d = a;
      a = c;
      c = d;
    }
  }
  if (a == 1){
    cout << "A";
  }
  else if (b == 1){
    cout << "B";
  }
  else {
    cout << "C";
  }
  cout << endl;

  return 0;
}
    
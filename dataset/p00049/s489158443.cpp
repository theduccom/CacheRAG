#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  int n;
  int a, b, ab, o;
  char t;
  string c;

  a = b = ab = o = 0;
  while (cin >> n >> t >> c){
    if (c == "A") a++;
    else if (c == "B")  b++;
    else if (c == "AB") ab++;
    else if (c == "O")  o++;
  }
  cout << a << endl << b << endl << ab << endl << o << endl;
  return (0);
}
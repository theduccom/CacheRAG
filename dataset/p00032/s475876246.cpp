#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  int x, y, diag, rect, loze;
  char c;
  rect = loze = 0;
  for (;;) {
    cin >> x >> c >> y >> c >> diag;
    if (cin.eof())
      break;
    if (x*x+y*y==diag*diag)
      rect++;
    if (x == y)
      loze++;
  }
  cout << rect << endl;
  cout << loze << endl;
  return 0;
}
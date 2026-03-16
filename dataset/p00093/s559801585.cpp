#include <iostream>
using namespace std;

int main()
{
  int y1, y2;
  bool first = true;
  while (cin >> y1 >> y2)
  {
    bool na = true;
    if (y1 == 0 && y2 == 0) return 0;
    if (first) { first = false; }
    else cout << endl;
    for (int year = y1; year <= y2; year++)
    {
      if (year % 400 == 0)
      {
        cout << year << endl;
        na = false;
      }
      else if ((year % 4 == 0) && (year % 100 != 0))
      {
        cout << year << endl;
        na = false;
      }
    }
    if (na) cout << "NA" << endl;
  }
}
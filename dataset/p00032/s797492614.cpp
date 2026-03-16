#include<iostream>
#include<iomanip>
#include<vector>
#include<queue>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>
#include<memory>

using namespace std;

int main()
{
  int a, b, c;
  char d;
  int r = 0, l = 0;

  while ( cin >> a >> d >> b >> d >> c )
    {
      if ( a * a + b * b == c * c )
        {
          if ( a != b ) ++r;
        }
      else
        {
          if ( a == b ) ++l;
        }
    }

  cout << r << endl;
  cout << l << endl;
  
  return 0;
}
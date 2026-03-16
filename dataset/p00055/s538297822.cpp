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
  const double c = 633.0 / 81.0;
  double a;

  while ( cin >> a )
    cout << fixed << setprecision(7) << c * a << endl;
  
  return 0;
}
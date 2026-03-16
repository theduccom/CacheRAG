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
  char ball, c1, c2, c;

  ball = 'A';
  
  while ( cin >> c1 >> c >> c2 )
    {
      if ( c1 == ball )
        ball = c2;
      else if ( c2 == ball )
        ball = c1;
    }

  cout << ball << endl;
  
  return 0;
}
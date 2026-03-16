#include<iostream>
#include<iomanip>
#include<vector>
#include<queue>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>
#include<memory>
#include<array>

using namespace std;

int main()
{
  array<array<int,8>,8> tbl;
  char c;
  
  while(true)
    {
      for ( auto i = 0; i < 8; ++i )
        for ( auto j = 0; j < 8; ++j )
          {
            if ( cin >> c )
              tbl[i][j] = c - '0';
            else
              return 0;
          }

      for ( auto i = 0; i < 8; ++i )
        for ( auto j = 0; j < 8; ++j )
          {
            if ( tbl[i][j] == 1 )
              {
                if ( tbl[i][j+1] == 1 && tbl[i+1][j] == 1 && tbl[i+1][j+1] == 1 )
                  cout << "A" <<endl;
                else if ( tbl[i+1][j] == 1 && tbl[i+2][j] == 1 && tbl[i+3][j] == 1)
                  cout << "B" << endl;
                else if ( tbl[i][j+1] == 1 && tbl[i][j+2] == 1 && tbl[i][j+3] == 1)
                  cout << "C" << endl;
                else if ( tbl[i+1][j] == 1 && tbl[i+1][j-1] == 1 && tbl[i+2][j-1] == 1)
                  cout << "D" << endl;
                else if ( tbl[i][j+1] == 1 && tbl[i+1][j+1] == 1 && tbl[i+1][j+2] == 1)
                  cout << "E" << endl;
                else if ( tbl[i+1][j] == 1 && tbl[i+1][j+1] == 1 && tbl[i+2][j+1] == 1)
                  cout << "F" << endl;
                else if ( tbl[i][j+1] == 1 && tbl[i+1][j-1] == 1 && tbl[i+1][j] == 1)
                  cout << "G" << endl;

                i = j = 8;
              }
          }
    }
  
  return 0;
}
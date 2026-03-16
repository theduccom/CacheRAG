#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<map>
#include<stack>
#include<queue>
#include<list>
using namespace std;
int inf = 1000000000;

int main(void) {

  vector<string> s(16);
  for(int i=0; i<4; i++) s[i] = "0000000000000000";
  for(int i=12; i<16; i++) s[i] = "0000000000000000";
  while(cin >> s[4]){
    for(int i=5; i<12; i++) cin >> s[i];
    for(int i=4; i<12; i++) s[i] = "0000" + s[i] + "0000";

    bool f = false;
    for(int i=4; i<12; i++){
      for(int j=4; j<12; j++){
        if( f ) continue;
        if( s[i][j] == '0' ) continue;

        if( s[i][j] == '1' && s[i+1][j] == '1' && s[i][j+1] == '1' && s[i+1][j+1] == '1' ) cout << 'A' << endl;
        else if( s[i][j] == '1' && s[i+1][j] == '1' && s[i+2][j] == '1' && s[i+3][j] == '1' ) cout << 'B' << endl;
        else if( s[i][j] == '1' && s[i][j+1] == '1' && s[i][j+2] == '1' && s[i][j+3] == '1' ) cout << 'C' << endl;
        else if( s[i][j] == '1' && s[i+1][j] == '1' && s[i+1][j-1] == '1' && s[i+2][j-1] == '1' ) cout << 'D' << endl;
        else if( s[i][j] == '1' && s[i][j+1] == '1' && s[i+1][j+1] == '1' && s[i+1][j+2] == '1' ) cout << 'E' << endl;
        else if( s[i][j] == '1' && s[i+1][j] == '1' && s[i+1][j+1] == '1' && s[i+2][j+1] == '1' ) cout << 'F' << endl;
        else if( s[i][j] == '1' && s[i][j+1] == '1' && s[i+1][j] == '1' && s[i+1][j-1] == '1' ) cout << 'G' << endl;

        f = true;
      }
    }


  }

  return 0;
}

// EOF
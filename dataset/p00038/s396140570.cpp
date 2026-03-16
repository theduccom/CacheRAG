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
  vector<int> t(5);
  vector<string> s = {"null", "one pair", "two pair", "three card", "straight", "full house", "four card"};
  while( scanf("%d,%d,%d,%d,%d", &t[0], &t[1], &t[2], &t[3], &t[4]) != EOF ){
    sort(t.begin(), t.end());
    vector<int> c(14, 0);
    for(int i=0; i<5; i++) c[ t[i] ]++;
    int two = 0, thr = 0, four = 0;
    for(int i=0; i<14; i++){
      if( c[i] == 2 ) two++;
      if( c[i] == 3 ) thr++;
      if( c[i] == 4 ) four++;
    }

    int ans = 0;
    if( four == 1 ) ans = 6;
    else if( thr == 1 && two == 1 ) ans = 5;
    else if( t[0] + 1 == t[1] && t[1] + 1 == t[2] && t[2] + 1 == t[3] && t[3] + 1 == t[4] ) ans = 4;
    else if( t[0] == 1 && t[1] == 10 && t[2] == 11 && t[3] == 12 && t[4] == 13 ) ans = 4;
    else if( thr == 1 ) ans = 3;
    else if( two == 2 ) ans = 2;
    else if( two == 1 ) ans = 1;

    cout << s[ans] << endl;
  }

  return 0;
}

// EOF
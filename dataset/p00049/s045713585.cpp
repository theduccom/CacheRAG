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

  int n; char s[10];
  vector<int> a(4, 0);
  while( scanf("%d,%s", &n, s) != EOF ){
    if( n == 0 ) break;
    if( s[0] == 'A' && s[1] == 'B' ) a[2]++;
    else if( s[0] == 'A' ) a[0]++;
    else if( s[0] == 'B' ) a[1]++;
    else if( s[0] == 'O' ) a[3]++;
  }
  for(int i=0; i<4; i++) cout << a[i] << endl;

  return 0;
}

// EOF
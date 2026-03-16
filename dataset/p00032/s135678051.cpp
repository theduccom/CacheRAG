#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
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

  int a, b, c;
  int x = 0;
  int y = 0;
  while(scanf("%d,%d,%d", &a, &b, &c)!=EOF){
    if( a == 0 ) break;
    if( a*a + b*b == c*c ) x++;
    if( a == b ) y++;
  }
  cout << x << endl;
  cout << y << endl;


  return 0;
}


// EOF
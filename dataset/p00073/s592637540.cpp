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
  double x, h;
  while(cin >> x >> h){
    if( x == 0 ) break;
    double s = x * x;

    s += 2 * x * sqrt( h * h + x * x / 4 );

    printf("%.10lf\n", s);
  }

  return 0;
}

// EOF
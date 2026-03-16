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

  double t;
  while( cin >> t ){
    double sum = 0.0;
    for(int i=0; i<10; i++){
      sum += t;
      if( i % 2 == 0 ) t = t * 2;
      else t = t / 3;
    }
    printf("%.10lf\n", sum);
  }

  return 0;
}

// EOF
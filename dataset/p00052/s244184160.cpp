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

  int n;
  while(cin >> n){
    if( n == 0 ) break;
    int cnt = 0;
    for(int i=n; i>= 1; i--){
      int tmp = i;
      while( tmp % 5 == 0 ){
        cnt++;
        tmp /= 5;
      }
    }
    cout << cnt << endl;
  }

  return 0;
}

// EOF
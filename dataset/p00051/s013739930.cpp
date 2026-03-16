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
#include<cassert>
using namespace std;
int inf = 1000000000;


int main(void) {
  int a;
  cin >> a;
  string n;
  for(int i=0; i<a; i++){
    cin >> n;
    if( a == 0 ) break;
    sort(n.begin(), n.end());
    int x = 0;
    int y = 0;
    int c = 1;
    for(int i=0; i<8; i++){
      x += c * (n[i]-'0');
      y += c * (n[7-i]-'0');
      c *= 10;
    }
    cout << x-y << endl;

  }


  return 0;
}


// EOF
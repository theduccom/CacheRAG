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
  vector<int> a = {1,0,0};
  string b = "ABC";
  char x, y;
  int p, q;
  while( scanf("%c,%c",&x, &y) != EOF ){
    p = x-'A';
    q = y-'A';
    swap(a[p], a[q]);
  }
  for(int i=0; i<3; i++) if( a[i] == 1 ) cout << b[i] << endl;

  return 0;
}

// EOF
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

  int n;
  while(cin >> n){
    if( n == 0 ) break;
    int a = 1024;
    vector<int> b;
    while( a != 0 ){
      if( n / a != 0 ){
        n %= a;
        b.push_back(a);
      }
      a /= 2;
    }
    for(int i=0; i<b.size(); i++){
      if( i != b.size()-1 ) cout << b[b.size()-1-i] << " ";
      else cout << b[b.size()-1-i] << endl;
    }

  }


  return 0;
}


// EOF
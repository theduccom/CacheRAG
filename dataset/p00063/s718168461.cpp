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
  string s;
  int cnt = 0;
  while(cin >> s){
    bool f = true;
    for(int i=0; i<s.size(); i++){
      if( s[i] != s[s.size()-1-i] ) f = false;
    }
    cnt += f;
  }
  cout << cnt << endl;

  return 0;
}

// EOF
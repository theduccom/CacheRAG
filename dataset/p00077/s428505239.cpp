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
  while( cin >> s ){
    int n = s.size();
    string ans = "";
    for(int i=0; i<n; i++){
      if( s[i] == '@' ){
        ans += string(s[i+1]-'0', s[i+2]);
        i += 2;
      }else ans += s[i];
    }
    cout << ans << endl;
  }

  return 0;
}

// EOF
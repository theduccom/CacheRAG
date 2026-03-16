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
using namespace std;
int inf = 1000000000;

int main(void) {
  string s;
  string ans = "";
  while(cin >> s){
    if( s.find("apple") != -1 ) s.replace(s.find("apple"), 5, "peach");
    else if( s.find("peach") != -1 ) s.replace(s.find("peach"), 5, "apple");
    ans += s;

    ans += ' ';
  }
  cout << ans.substr(0, ans.size()-1) << endl;

  return 0;
}

// EOF
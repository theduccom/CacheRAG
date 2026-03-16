#include <map>
#include <set>
#include <cmath>
#include <queue>
#include <stack>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

#define INF (2 << 28)
#define fr first
#define sc second
using namespace std;

typedef long long ll;
typedef pair<int, int> iP;

map< char, int > R;

void makeR() {
  R['I'] = 1; R['V'] = 5; R['X'] = 10; R['L'] = 50; R['C'] = 100;
  R['D'] = 500; R['M'] = 1000;
}

int main(){
 
  string s;
  makeR();
  while(cin >> s) {
    int res = 0;
    for(int i = 0; i < s.size() - 1; i++) {
      if(R[s[i]] < R[s[i + 1]]) res -= R[s[i]];
      else res += R[s[i]];
    }
    cout << res + R[s[s.size() - 1]]<< endl;
  }
}
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() {
  int n;
  for(;;) {
    cin >> n;
    if(n == 0) break;
    
    int c;
    int ice[10] = {};
    for(int i=0; i<n; ++i) {
      cin >> c;
      ++ice[c];
    }

    for(int i=0; i<=9; ++i) {
      if(ice[i] == 0) cout << "-" << endl;
      else {
        for(int j=0; j<ice[i]; ++j) {
          cout << "*";
        }
        cout << endl;
      }
    }

  }
}


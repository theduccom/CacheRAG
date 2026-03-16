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
    string s[n];

    int pm, pe, pj;
    for(int i=0; i<n; ++i) {
      cin >> pm >> pe >> pj;
      if(pm == 100 || pe == 100 || pj == 100) s[i] = "A";
      else if((pm + pe) / 2 >= 90) s[i] = "A";
      else if((pm + pe + pj) / 3 >= 80) s[i] = "A";
      else if((pm + pe + pj) / 3 >= 70) s[i] = "B";
      else if((pm + pe + pj) / 3 >= 50 && (pm >= 80 || pe >= 80)) s[i] = "B";
      else s[i] = "C";
    }

    for(int i=0; i<n; ++i) cout << s[i] << endl;

  }
}



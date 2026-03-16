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
    int p, d1, d2, num, dis = 0;
    for(int i=0; i<n; ++i) {
      cin >> p >> d1 >> d2;
      if(max(dis, d1 + d2) == d1 + d2) {
        num = p;
        dis = d1 + d2;
      }
    }
    cout << num << " " << dis << endl;
  }
}



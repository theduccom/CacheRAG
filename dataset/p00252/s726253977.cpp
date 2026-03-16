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
  int b1, b2, b3;
  cin >> b1 >> b2 >> b3;
  if(b1 == 1 && b2 == 1 && b3 == 0) cout << "Open" << endl;
  else if(b1 == 0 && b2 == 0 && b3 == 1) cout << "Open" << endl;
  else cout << "Close" << endl;
}



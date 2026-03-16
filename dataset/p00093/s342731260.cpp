#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <limits>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <complex>

using namespace std;

//define
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
#define dump(x)  cerr << #x << " = " << (x) << endl;

#define INF (INT_MAX/3)
#define PI (2*acos(0.0))
#define EPS (1e-8)

typedef long long ll;
typedef unsigned long long ull;

int main(){
  ios_base::sync_with_stdio(0);
  int a, b;
  int cnt = 0;
  while(cin >> a >> b, a || b){
    if(cnt) cout << endl;
    bool exist = false;
    for(int i = a; i <= b; i++){
      if(i % 400 == 0) { exist = true; cout << i << endl; }
      else if(i % 4 == 0 && i % 100 != 0) { exist = true; cout << i << endl; }
    }
    if(!exist) cout << "NA" << endl;
    cnt++;
  }
  return 0;
}
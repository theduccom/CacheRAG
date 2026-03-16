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

bool isStraight(int a[]) {
  
  bool t[14];
  memset(t, false, sizeof(t));
  for(int i = 0; i < 5; i++) 
    t[a[i] - 1] = true;

  for(int i = 0; i <= 9; i++) {
    bool judge = true;
    for(int j = 0; j < 5; j++) {
      if(!t[(i + j) % 13]) judge = false;
    }
    if(judge) return true;
  }
  return false;
}

int main(){
  
  int a[5];
  while(~scanf("%d,%d,%d,%d,%d", &a[0], &a[1], &a[2], &a[3], &a[4])) {
    vector< int > S, sum(14, 0);
    for(int i = 0; i < 5; i++)
      sum[a[i]]++;
          
    int maxi = 0, mini = INF;
    for(int i = 1; i <= 13; i++) {
      if(sum[i]) {
        S.push_back(sum[i]);
        mini = min(mini, sum[i]);
        maxi = max(maxi, sum[i]);
      }
    }

    if(maxi >= 4) cout << "four card" << endl;
    else if(maxi == 3 && mini == 2) cout << "full house" << endl;
    else if(isStraight(a)) cout << "straight" << endl;
    else if(maxi == 3) cout << "three card" << endl;
    else if(maxi == 2 && mini == 1 && S.size() == 3) cout << "two pair" << endl;
    else if(maxi == 2) cout << "one pair" << endl;
    else cout << "null" << endl;
  }
}
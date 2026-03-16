#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <utility>
#include <cctype>
#include <bitset>
using namespace std;

#define rep(i,n) for(int (i)=0; (i)<(int)(n); ++(i))
#define foreach(c,i) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)

const int MAX_X = 1000002;
int N, X, p[32];

int main() {
  bitset<1000002> prime;
  prime.set();
  prime.reset(0);
  prime.reset(1);
  for (int i = 4; i < MAX_X; i+=2) prime.reset(i);
  for (int i = 3; i < MAX_X; i+=2) {
    if (prime[i]) {
      //printf("%d\n",i);
      for (int j = i+i; j < MAX_X; j+=i) prime.reset(j);
    }
  }
  
  while (scanf("%d%d",&N,&X),N|X) {
    //printf("%d %d\n", N, X);
    rep(i,N) scanf("%d",p+i);
    //rep(i,N) printf("%d\n",p[i]);
    bitset<1000002> bs;
    bs.set(0);
    rep(i,N) {
      rep(j,X) {
        if (bs[j] && j + p[i] <= X && !bs[j+p[i]]) {
          //printf("%d\n",j+p[i]);
          bs.set(j+p[i]);
        }
      }
    }
    bool ok = false;
    for (int i = X; i > 1; --i) {
      if (prime[i] && bs[i]) {
        printf("%d\n",i);
        ok = true;
        break;
      }
    }
    if (!ok) {
      puts("NA");
    }
  }
  return 0;
}
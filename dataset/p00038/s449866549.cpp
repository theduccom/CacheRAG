#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<complex>
#include<map>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()
#define EPS (1e-10)
using namespace std;

typedef unsigned int uint;
typedef long long ll;
typedef complex<double> P;

const char *name[] = {
  "null",
  "one pair",
  "two pair",
  "three card",
  "straight",
  "full house",
  "four card"
};

int main(){
  int c[5];
  while(~scanf("%d,%d,%d,%d,%d",c,c+1,c+2,c+3,c+4)){
    int cnt[14] = {0};
    int yaku = 0;
    int cnt2[5] = {0};
    sort(c, c+5);
    REP(i,5) cnt[c[i]]++;
    REP(i,14) cnt2[cnt[i]]++;
    if(cnt2[2] == 1) yaku = 1;
    if(cnt2[2] == 2) yaku = 2;
    if(cnt2[3] == 1) yaku = 3;
    if(c[1]==c[0]+1&&
       c[2]==c[1]+1&&
       c[3]==c[2]+1&&
       c[4]==c[3]+1)
      yaku = 4;
    if(c[0]==1  &&
       c[1]==10 &&
       c[2]==11 &&
       c[3]==12 &&
       c[4]==13)
      yaku = 4;
    if(cnt2[2] == 1 && cnt2[3] == 1)
      yaku = 5;
    if(cnt2[4] == 1)
      yaku = 6;
    puts(name[yaku]);
  }
  return 0;
}
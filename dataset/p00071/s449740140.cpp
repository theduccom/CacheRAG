#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cstring>
#include<climits>
#include<cfloat>
#include<cmath>
#include<map>
#include<complex>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()

typedef unsigned int uint;
typedef long long ll;

using namespace std;

int b[8][8];
int f[8][8];

void set(int y, int x){
  if(x < 0) return;
  if(y < 0) return;
  if(x > 7) return;
  if(y > 7) return;
  f[y][x] = 1;
}

int main(){
  int n; scanf("%d",&n);
  for(int nn = 1; nn <= n; nn++){
    int x,y;
    REP(i,8){
      char buff[10];
      scanf("%s",buff);
      REP(j,8){b[i][j] = buff[j] - '0'; f[i][j]=0;}
    }
    scanf("%d%d",&x,&y);
    f[y-1][x-1] = 1;
    bool ret = true;
    while(ret){
      ret = false;
      REP(i,8) REP(j,8){
        if(b[i][j] == 1 && f[i][j] == 1){
          ret = true;
          b[i][j] = 2;
          for(int k=-3; k<=3; k++){
            set(i+k,j); set(i,j+k);
          }
        }
      }
    }
    printf("Data %d:\n",nn);
    REP(i,8){
      REP(j,8){
        printf("%d",b[i][j]==1?1:0);
      }
      puts("");
    }
  }
  return 0;
}
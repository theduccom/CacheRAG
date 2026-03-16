#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <utility>
#define mp make_pair
#define f first
#define s second
#define dm(x) cerr << #x << " = " << x << endl;
using namespace std;

#define rep(i,n) for(int i=0; i<(n); i++)
typedef pair<long,long> pp;

pp dp[1001][1001];
int p[1001],w[1001];
int W, N;

pp operator+(pp a,pp b)
{
  pp ret(a.f+b.f, a.s+b.s);
  return ret;
}

//i番目以降でj以下の重さで価値を最大化。 {最大の価値, その時の重さ}
pp calc(int i,int j)
{
  pp ret;
  if(dp[i][j].f>=0) return dp[i][j];
  if(i==N) ret=mp(0,0);
  else if(j<w[i]) ret=calc(i+1,j);
  else{
    pp a=calc(i+1,j);
    pp b=calc(i+1,j-w[i]) + mp(p[i],w[i]);
    if(a.f>b.f) ret = a;
    else if(a.f<b.f) ret = b;
    else{
      if(a.s > b.s) ret = b;
      else ret = a;
    }
  } 
  return dp[i][j] = ret;
}

int main()
{
  int n=1;
  while(scanf("%d", &W),W){
    scanf("%d", &N);
    rep(i,N) scanf("%d, %d",p+i, w+i);
    // rep(i,N) printf("%d: p:%d w:%d\n",i , p[i], w[i]);
    rep(i,N+1) rep(j,W+1) {dp[i][j]=mp(-1,-1);}
    pp ret=calc(0,W);
    // printf(","); rep(j,W+1) printf("%d,",j); printf("\n");
    // rep(i,N+1){
    //   printf("%d,",i);
    //   rep(j,W+1)
    //     printf("%d,",calc(i,j).f);
    //   printf("\n");
    // }
    // rep(i,N+1){
    //   printf("%d,",i);
    //   rep(j,W+1)
    //     printf("%d,",calc(i,j).s);
    //   printf("\n");
    // }
    
    printf("Case %d:\n%ld\n%ld\n", n++, ret.f, ret.s);
  }
  return 0;
}
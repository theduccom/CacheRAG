#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<queue>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;
#define REP(i,a,n) for(int i = a ; i < n ; i++)
#define rep(i,n) REP(i,0,n)

typedef long long ll;

double t[1000000];

void solve(){
}

int main(){
  int n = 0;
  for(int i=0;cin>>t[i];i++,n++);
  sort(t,t+n);
  printf("%.1f\n",t[n-1]-t[0]);
}
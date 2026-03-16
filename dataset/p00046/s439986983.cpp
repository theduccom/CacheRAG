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

void solve(){
}

int main(){
  double min=-1,max=-1;
  double h;

  while(cin>>h){
    if(min == -1 || min > h) min = h;
    if(max == -1 || max < h) max = h;
  }
  printf("%.1f\n",max-min);
}
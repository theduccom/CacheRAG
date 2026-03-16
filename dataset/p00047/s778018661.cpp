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
  char a,b,ch;
  bool flg[3] = {1,0,0};

  while(cin>>a>>ch>>b){
    swap(flg[a-'A'],flg[b-'A']);
  }
  cout<<(flg[0] ? 'A' : flg[1] ? 'B' : 'C')<<endl;
}
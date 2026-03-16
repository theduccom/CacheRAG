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
  char now = 'A';
  char a,b,ch;
  while(cin>>a>>ch>>b){
    if(a == now) now = b;
    else if(b == now) now = a;
  }
  cout<<now<<endl;
}
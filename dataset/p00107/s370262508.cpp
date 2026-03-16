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
  double a,b,c;

  while(cin>>a>>b>>c,a||b||c){
    double len = min(a*a+b*b, min(a*a+c*c, b*b+c*c));
    int n;
    cin>>n;

    rep(i,n){
      double r;
      cin>>r;
      r *= 2;
      if(len >= r*r){
        cout<<"NA\n";
      }
      else{
        cout<<"OK\n";
      }
    }
  }
}
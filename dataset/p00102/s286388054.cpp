#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
  int n,c;
  while(cin>>n,n){
    int a[n+1][n+1];
    rep(i,n){c=0;rep(j,n){
        cin>>a[i][j];
        c+=a[i][j];
      }
      a[i][n]=c;
    }
    rep(j,n+1){c=0;rep(i,n){
      c+=a[i][j];
    }
    a[n][j]=c;
  }
  rep(i,n+1){rep(j,n+1){printf("%5d",a[i][j]);}cout<<endl;}
  }
}
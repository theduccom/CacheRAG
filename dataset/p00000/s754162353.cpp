#include<bits/stdc++.h>
using namespace std;
int QQ(int i,int j){
  int Q;
  Q=i*j;
  return Q;
}
signed main(){
  cin.tie(NULL);
  ios::sync_with_stdio(false);
  int i,j,Q;
  for(i=1;i<=9;i++){
    for(j=1;j<=9;j++){
      Q=QQ(i,j);
      cout<<i<<"x"<<j<<"="<<Q<<'\n';
    }
  }
  return(0);
}


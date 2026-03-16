#include<iostream>
#include<algorithm>
using namespace std;
#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n)   REP(i,0,n)
#define ALL(C)     (C).begin(),(C).end()


int table[1000][1001];
void solve(int lim,int n,int *weight,int *value){
  rep(i,n){
    rep(j,lim+1){
      table[i][j]=0;
    }
  }
  

  if (weight[0] <= lim)table[0][weight[0]]=value[0];
  
  REP(i,1,n){
    rep(j,lim+1){
      table[i][j]=table[i-1][j];
      if (j-weight[i]<0)continue;
      table[i][j]=max(table[i][j],table[i-1][j-weight[i]]+value[i]);
    }
  }
  
  int maxi=0,answ;
  rep(i,lim+1){
    if (table[n-1][i] > maxi)maxi=table[n-1][i],answ=i;
  }
  cout << maxi<<endl;
  cout << answ << endl;
}

main(){
  int n,w;
  int value[1000],weight[1000];
  int tc=1;
  while(cin>>w>>n && w){
    char dummy;
    rep(i,n){
      cin>>value[i]>>dummy>>weight[i];
    }
    cout << "Case "<< tc++ << ":" << endl;

    solve(w,n,weight,value);
  }
  return false;
}
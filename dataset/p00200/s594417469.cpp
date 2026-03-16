#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define it ::iterator
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double ESP=1e-10;
const double inf=1e8;
using namespace std;
int main(){
  int a,b;
  while(cin>>a>>b,a||b){
    int d1[101][101];
    int d2[101][101];
    rep(i,101)rep(j,101){
      d1[i][j]=inf;
      d2[i][j]=inf;
    }
    rep(i,a){
      int c,d,e,f;
      cin>>c>>d>>e>>f;
      c--;d--;
      d1[c][d]=e;d1[d][c]=e;
      d2[c][d]=f;d2[d][c]=f;
    }
    rep(k,b)rep(i,b)rep(j,b){
      d1[i][j]=min(d1[i][j],d1[i][k]+d1[k][j]);
      d2[i][j]=min(d2[i][j],d2[i][k]+d2[k][j]);
    }
    int n;cin>>n;
    rep(i,n){
      int g,h,l;cin>>g>>h>>l;
      g--;h--;
      if(l)cout<<d2[g][h]<<endl;
      else cout<<d1[g][h]<<endl;
    }
  }
}
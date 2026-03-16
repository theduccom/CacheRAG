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
const int inf=1e9;
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;
  vector<vector<int> >in(a,vector<int>(a));
  rep(i,a)rep(j,a)in[i][j]=inf;
  int c,d,e,f;
  //cout<<"!"<<endl;
  rep(i,b+1){
    char x;
    cin>>c>>x>>d>>x>>e>>x>>f;
    c--;d--;
    if(i==b)break;
    in[c][d]=e;
    in[d][c]=f;
  }
  rep(k,a)rep(i,a)rep(j,a){
    in[i][j]=min(in[i][j],in[i][k]+in[k][j]);
  }
  cout<<e-f-(in[c][d]+in[d][c])<<endl;
}
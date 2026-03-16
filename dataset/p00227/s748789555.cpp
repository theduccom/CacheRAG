#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<vector>
#include<cmath>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb(in,tmp) in.push_back(tmp)
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
using namespace std;
int main(){
  int n,m;
  while(cin>>n>>m,n||m){
    vector<int>in(n);
    rep(i,n)cin>>in[i];
    sort(all(in),greater<int>());
    int sum=0;
    rep(i,n){
      if(!((i+1)%m))continue;
      sum+=in[i];
    }
    cout<<sum<<endl;
  }
}
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
using namespace std;
#define MAX 1000000
bool sosu[MAX+1]={1,1,0};
int main(){
  for(int i=4;i<=MAX;i+=2)sosu[i]=true;
  for(int i=3;i<=MAX;i+=2){
    if(sosu[i])continue;
    for(int j=i*3;j<MAX;j+=i*2)sosu[j]=true;
  }
  int n,m;
  while(cin>>n>>m,n||m){
    bool dp[MAX+1]={false};
    vector<int>in(n);
    rep(i,n){cin>>in[i];dp[in[i]]=true;}
    rep(i,n)rep(j,m+1){
      if(dp[j]&&j+in[i]<=MAX)dp[j+in[i]]=true;
    }
    int maxi=0;
    int i=0;
    for(i=m;i>=0;i--)if(!sosu[i]&&dp[i])break;
    if(i!=-1)cout<<i<<endl;
    else cout<<"NA"<<endl;
  }
}
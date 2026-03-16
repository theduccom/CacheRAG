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
int main(){
  int n;
  while(cin>>n,n){
    vector<vector<int> >in(n+1);
    rep(i,n){
      int sum=0;
      rep(j,n){
	int tmp;cin>>tmp;
	in[i].pb(tmp);
	sum+=tmp;
      }
      in[i].pb(sum);
    }
    
    rep(i,n+1){
      int sum=0;
      rep(j,n)sum+=in[j][i];
      in[n].pb(sum);
    }
    rep(i,n+1){
      rep(j,n+1)printf("%5d",in[i][j]);
      cout<<endl;
    }
  }
}
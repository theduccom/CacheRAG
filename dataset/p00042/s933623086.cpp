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
  int m;
  int co=0;
  while(cin>>m,m){
    co++;
    int n;
    cin>>n;
    int in[1001][1001]={0};
    rep(q,n){
      int i=q+1;
      int a,b;char d;
      cin>>a>>d>>b;
      rep(j,m+1){
	if(j>=b)
	  in[i][j]=max(in[i][j],in[i-1][j-b]+a);
	in[i][j]=max(in[i][j],in[i-1][j]);
      }
    }
    int max1=0;
    rep(i,m+1)max1=max(max1,in[n][i]);
    rep(i,m+1)
      if(in[n][i]==max1){
	cout<<"Case "<<co<<":"<<endl;
	cout<<max1<<endl<<i<<endl;
	break;
      }
  }
}

/*int main(){
  int m;
  int co=0;
  while(cin>>m,m){
    co++;
    int n;
    char d;
    cin>>n;
    vector<int>w(n),v(n);
    vector<vector<int> >dp(n+1);
    rep(i,m+1)dp[0].pb(0);
    rep(q,n){
      int i=q+1;
      int a,b;char d;
      cin>>a>>d>>b;
      dp[i].pb(0);
      

}
*/
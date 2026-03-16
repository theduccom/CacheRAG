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
    int out[10]={0};
    rep(i,n){
      int a;cin>>a;
      out[a]++;
    }
    rep(i,10){if(out[i])rep(j,out[i])cout<<'*';else cout<<'-';cout<<endl;}
  }
}
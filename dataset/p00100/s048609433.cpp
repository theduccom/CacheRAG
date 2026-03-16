#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<list>
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
    map<int,long long int>m;
    vector<int>l;
    rep(i,n){
      long long int a,b,c;
      cin>>a>>b>>c;
      bool h=true;
      rep(i,l.size())if(a==l[i])h=false;
      if(h)l.pb(a);
      m[a]+=b*c;
    }
    //cout<<l.size()<<endl;
    int co=0;
    rep(i,l.size())if(m[l[i]]>=1000000){cout<<l[i]<<endl;co++;}
    if(!co)cout<<"NA"<<endl;
  }
}
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
    map<int,long long int>in;
    vector<int>in2;
    rep(i,n){
      int a;
      long long int b,c;
      cin>>a>>b>>c;
      if(in[a])in[a]+=b*c;
      else {in[a]+=b*c;in2.pb(a);}
    }
    bool han=false;
    rep(i,in2.size())if(in[in2[i]]>=1000000){han=true;cout<<in2[i]<<endl;}
    if(!han)cout<<"NA"<<endl;
  }
}
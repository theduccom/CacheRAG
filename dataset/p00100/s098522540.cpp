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
    map<int,long long int>m;
    vector<int>num;
    rep(i,n){
      long long int a,b,c;
      cin>>a>>b>>c;
      if(m.find(a)==m.end()){
	num.pb(a);
	m.insert(mp(a,b*c));
      }else{
	m[a]+=b*c;
      }
    }
    bool h=false;
    rep(i,num.size()){
      if(m[num[i]]>=1000000){
	cout<<num[i]<<endl;
	h=true;
      }
    }
    if(!h)cout<<"NA"<<endl;
  }
}
#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define pb push_back
using namespace std;

int main(){
  vector<string>s;
  vector<int>in[100];
  string tmp;
  int num;
  int co=0;  
  while(cin>>tmp>>num){
    int n=-1;
    rep(i,s.size())if(s[i]==tmp)n=i;
    if(n+1){
      in[n].pb(num);
    }else{
      s.pb(tmp);
      in[co].pb(num);
      co++;
    }
  }
  vector<int>order(s.size());
  rep(i,s.size())order[i]=i;
  rep(i,s.size()){
    rep(j,s.size()-i-1){
      if(s[order[j]]>s[order[j+1]]){
	swap(order[j],order[j+1]);
      }
    }
  }
  rep(i,s.size()){
    cout<<s[order[i]]<<endl;
    sort(in[order[i]].begin(),in[order[i]].end());
    cout<<in[order[i]][0];
    rep(j,in[order[i]].size()-1)cout<<" "<<in[order[i]][j+1];
    cout<<endl;
  }
}
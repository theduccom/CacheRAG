#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main(){

  map<string, vector<int> > mp;
  string s;
  int n;

  while(cin>>s>>n){
    mp[s].push_back(n);
  }

  for(auto p:mp){
    string name=p.first;
    vector<int> v=p.second;

    cout<<name<<endl;

    sort(v.begin(), v.end());
    for(int i=0;i<(int)v.size();i++){
      if(i>0) cout<<" ";
      cout<<v[i];
    }

    cout<<endl;
  }
  
  return 0;
}
//Book Index
#include<bits/stdc++.h>
using namespace std;

map<string, vector<int> > mp;

int main(){
  string s;
  int n;
  while(cin>>s>>n){
    if(mp.find(s)==mp.end()){
      vector<int> tmp;
      tmp.push_back(n);
      mp.insert(map<string, vector<int> >::value_type(s, tmp));
    }
    else{
      mp[s].push_back(n);
    }
  }
  for(map<string, vector<int> >::iterator it=mp.begin(); it!=mp.end(); it++){
    cout<<it->first<<endl;
    sort(it->second.begin(), it->second.end());
    for(int i=0; i<it->second.size(); i++){
      if(i!=it->second.size()-1)cout<<it->second[i]<<' ';
      else cout<<it->second[i]<<endl;
    }
  }
  return 0;
}
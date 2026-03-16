#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

  string s;
  int n;
  typedef vector < int > vec;
  map < string, vec > mp;
  vector < string > v;
  
  while(cin >> s >> n){
    mp[s].push_back(n);
    v.push_back(s);
  }

  sort(v.begin(), v.end());
  v.erase(unique(v.begin(), v.end()), v.end());

  for(int i=0;i<v.size();i++){
    sort(mp[v[i]].begin(), mp[v[i]].end());
    cout << v[i] << endl;
    for(int j=0;j<mp[v[i]].size()-1;j++) cout << mp[v[i]][j] << " ";
    cout << mp[v[i]][mp[v[i]].size()-1] << endl;
  }

}
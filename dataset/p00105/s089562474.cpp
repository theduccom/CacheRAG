#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
map<string,vector<int> > m;
vector<string> v;
int main(void){
  string s;
  int p;
  while(cin >> s >> p){
    if(m.find(s) == m.end()){
      v.push_back(s);
    }
    m[s].push_back(p);
  }

  sort(v.begin(),v.end());
  for(int i = 0; i < (int)v.size(); i++){
    cout << v[i] << endl;
    sort(m[v[i]].begin(),m[v[i]].end());
    for(int j = 0; j < (int)m[v[i]].size(); j++){
      cout << m[v[i]][j] << ((j+1==(int)m[v[i]].size())?'\n':' ');
    }
  }
}
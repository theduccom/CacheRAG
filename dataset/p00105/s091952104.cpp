#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  map<string,vector<int> > m;
  string s;
  int page;

  while(cin>>s>>page){
    m[s].push_back(page);
  }

  for(map<string,vector<int> >::iterator i=m.begin();i!=m.end();i++){
    vector<int> v = (i->second);
    cout<<(i->first)<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
      if(i != 0) cout<<" ";
      cout<<v[i];
    }
    cout<<endl;
  }
}
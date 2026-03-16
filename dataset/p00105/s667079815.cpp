#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  vector<pair<string,int>> com;
  string s;
  int a,count;
  string m;

  count = 0;

  while(cin>>s>>a){
    com.push_back(make_pair(s,a));
    ++count;
  }

  sort(com.begin(),com.end());

  for(int i = 0;i<count;++i){
    pair<string,int> p = com[i];
    if(i == 0){
      cout<<p.first<<endl;
      cout<<p.second;
      m = p.first;
    }
    else{
      if(m == p.first){
        cout<<" "<<p.second;
      } 
      else{
        cout<<endl;
        cout<<p.first<<endl;
        cout<<p.second;
        m = p.first;
      }
    }
  }

  cout<<endl;

  return 0;
}
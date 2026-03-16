#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  string s;
  int p;
  map<string,vector<int> > m;
  while(cin>>s>>p,!cin.eof())m[s].push_back(p);
  map<string,vector<int> >::iterator m_it = m.begin();
  while(m_it!=m.end()){
    cout<<(*m_it).first<<endl;
    vector<int> v = (*m_it).second;
    sort(v.begin(),v.end());
    vector<int>::iterator v_it = v.begin();
    while(v_it!=v.end())cout<<*v_it,v_it++,v_it==v.end()?cout<<endl:cout<<" ";
    m_it++;
  }
  return 0;
}
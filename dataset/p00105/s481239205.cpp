//09
#include<iostream>
#include<map>
#include<set>
#include<string>

using namespace std;

int main(){
  map<string,set<int> >idx;
  string s;
  int i;
  while(cin>>s>>i){
    idx[s].insert(i);
  }
  for(map<string,set<int> >::iterator it=idx.begin();it!=idx.end();it++){
    cout<<it->first<<endl;
    bool out=false;
    for(set<int>::iterator itt=it->second.begin();itt!=it->second.end();itt++){
      if(out){
	cout<<' ';
      }
      out=true;
      cout<<*itt;
    }
    cout<<endl;
  }
  return 0;
}
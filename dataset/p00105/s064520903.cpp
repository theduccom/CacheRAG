#include<map>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  map<string,vector<int> > index;
  string m;
  int d;
  while(cin>>m>>d){
    index[m].push_back(d);
  }
  map<string,vector<int> >::iterator it;
  for(it = index.begin() ; it!=index.end() ; it++){
    sort( (*it).second.begin() , (*it).second.end() );
    cout<<(*it).first<<endl;
    for(int i = 0 ; i < (*it).second.size() ; i++){
      cout<<(*it).second[i]<<(i == (*it).second.size()-1?'\n':' ');
    }
  }
}
#include<vector>
#include<map>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  map< string , vector<int> > mp;
  
  string str;
  int num;
  
  while( cin>>str>>num ){
    mp[ str ].push_back( num );
  }

  //for( pair<string,vector<int> > p : mp)
  for( auto  p : mp){
    string name=p.first;
    vector<int> v=p.second;
    sort(v.begin(),v.end());
    
    cout<<name<<endl;

    for(int i=0;i<(int)v.size();i++){
      if(i>0)cout<<' ';
      cout<<v[i];
    }
    cout<<endl;
  }
  
  return 0;
}
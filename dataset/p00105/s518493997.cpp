#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int value;
  string str;
  int flag;
  map<string,vector<int>> book;

  while(cin>>str>>value){
    book[str].push_back(value);
  }
  for(map<string,vector<int>>::iterator it=book.begin();it!=book.end();++it){
    cout<<it->first<<endl;
    sort(it->second.begin(),it->second.end());
    flag=0;
    for(auto i:it->second){
      if(flag) cout<<" ";
      flag=1;
      cout<<i;
	}
    cout<<endl;
  }
}
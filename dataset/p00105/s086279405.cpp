#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main(){
  map<string, vector<int> > word;
  string s;
  int n;
  while(cin >>s>>n){
    word[s].push_back(n);
  }
  for(map<string, vector<int> >::iterator i=word.begin(); i!=word.end(); i++){
    sort(i->second.begin(),i->second.end());
    cout <<i->first<<endl<<i->second[0];
    for(int j=1; j<i->second.size(); j++){
      cout <<" "<<i->second[j];
    }
    cout <<endl;
  }
  return 0;
}
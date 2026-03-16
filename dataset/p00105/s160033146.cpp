#include<iostream>
#include<map>
#include<algorithm>
#include<set>
using namespace std;

int main(){
  map<string,set<int> > Index;
  string s;
    int val;
  while(cin  >> s >> val){
    Index[s].insert(val);
  }

  map<string,set<int> >::iterator it = Index.begin();
  while(it != Index.end()){
    cout << it->first << endl;  
    set<int>::iterator it2 = (it->second).begin();
    while(it2 != (it->second).end()){
      cout << *it2;
      it2++;
      if(it2 != (it->second).end())cout << " ";
    } 
   cout << endl;
   it++;
  }
  return 0;
}
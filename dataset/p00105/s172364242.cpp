#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main(void){
  map<string, set<int> > Index;
  int page;
  string name;
  
  while(cin >> name >> page){
    Index[name].insert(page);
  }
  
  for(map<string, set<int> >::iterator it = Index.begin() ; it != Index.end() ; it++){
    cout << (*it).first << endl;
    
    int i = 0;
    
    for(set<int>::iterator it2 = it->second.begin() ; it2 != it->second.end() ;
	it2++){
      if(it->second.size()-1 != i) cout << *it2 << " ";
      else cout << *it2 << endl;
      i++;
    }
  }
  return 0;
}
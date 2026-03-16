#include <iostream>
#include <set>
#include <string>
#include <map>
#include <algorithm>

using namespace std;


int main() {

  string word;
  int page;

  map<string, set<int> > index;
  

  index.clear();

  while(cin >> word >> page) {

    index[word].insert(page);
    /*
     for(map<string, set<int> >::iterator it=index.begin();it!=index.end();it++) {

      cout << (*it).first << endl;

      for(set<int>::iterator it2=(*it).second.begin();it2!=(*it).second.end();it2++) {

	if(it2==(*it).second.begin()) cout << *it2;

	else cout << " " << *it2;

      }
      
      cout << endl;
    
      }
    */
  }

  for(map<string, set<int> >::iterator it=index.begin();it!=index.end();it++) {

      cout << (*it).first << endl;

      for(set<int>::iterator it2=(*it).second.begin();it2!=(*it).second.end();it2++) {

	if(it2==(*it).second.begin()) cout << *it2;

	else cout << " " << *it2;

      }
      
      cout << endl;

  }

  return 0;

}
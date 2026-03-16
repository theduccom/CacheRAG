#include <iostream>
#include <string>
#include <set>
#include <map>
using namespace std;

int main(){
  map< string, set<int> > index;
  string word;
  int page;

  while (cin >> word >> page){
    index[word].insert( page );
  }
  map< string, set<int> >::iterator it1 = index.begin();
  set<int>::iterator it2;
  while( it1 != index.end() ){
    cout << (*it1).first << endl;
    it2 = index[(*it1).first].begin();
    cout << *it2;
    it2++;
    while( it2 != index[(*it1).first].end() ){
      cout << ' ' << *it2;
      it2++;
    }
    cout << endl;
    it1++;
  }
  return 0;
}
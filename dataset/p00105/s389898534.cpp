#include <iostream>
#include <map>
#include <set>
using namespace std;

typedef map<string, set<int> > Dict;
Dict dict;
int main(){
  int p;
  string s;
  while(cin >> s >> p){
    dict[s].insert(p);
  }
  for(Dict::iterator it = dict.begin(); it != dict.end(); it++){
    cout << it->first << endl;
    int i = 0;
    for(set<int>::iterator it2 = (*it).second.begin(); it2 != (*it).second.end(); it2++, i++){
      if(i)cout << " ";
      cout << *it2;
    }
    cout << endl;
  }
  return 0;
}
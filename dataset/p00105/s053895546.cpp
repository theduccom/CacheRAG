#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include <map>
using namespace std;

int main() {
  string s;
  int p;
  map<string,set<int> > m;
  while(cin >> s >> p) {
    m[s].insert(p);
  }
  for(map<string,set<int> >::iterator i = m.begin();
      i != m.end(); ++i) {
    cout << i->first << endl;
    bool first = true;
    for(set<int>::iterator j = i->second.begin();
        j != i->second.end(); ++j) {
      if(first) first = false;
      else cout << " ";
      cout << *j;
    }
    cout << endl;
  }
  return 0;
}
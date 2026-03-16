#include <iostream>
#include <string>
#include <set>
#include <map>
using namespace std;


class S {
public:
  set<int> s;
};

int main() {
  map<string, S> data;
  set<string> word;
  string str;
  int page;
  while(cin >> str >> page) {
    word.insert(str);
    data[str].s.insert(page);
  }
  set<string>::iterator it = word.begin();
  while(it != word.end()) {
    cout << *it << endl;
    set<int>::iterator it2 = data[*it].s.begin();
    bool first = true;
    while(it2 != data[*it].s.end()) {
      if(first) first = false;
      else      cout << ' ';
      cout << *it2;
      it2++;
    }
    cout << endl;
    it++;
  }
  return 0;
}
#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;

int main(int argc, char *argv[]) {
  string word;
  int page;
  multimap<string, int> mm;
  while (cin >> word >> page)
    mm.insert(pair<string, int>(word, page));

  set<int> pages;
  word = "";
  for (multimap<string, int>::iterator itr = mm.begin();
       itr != mm.end(); itr++) {
    if (word != itr->first && !pages.empty()) {
      for (set<int>::iterator jtr = pages.begin();
           jtr != pages.end(); jtr++) {
        if (jtr != pages.begin())
          cout << ' ';
        cout << *jtr;
      }
      cout << endl;
      pages.clear();
      cout << itr->first << endl;
    } else if (word != itr->first) {
      cout << itr->first << endl;
    }
    word = itr->first;
    pages.insert(itr->second);
  }
  if (!pages.empty())
    for (set<int>::iterator jtr = pages.begin();
         jtr != pages.end(); jtr++) {
      if (jtr != pages.begin())
        cout << ' ';
      cout << *jtr;
    }
  cout << endl;
  return 0;
}
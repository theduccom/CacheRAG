#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<string, int> P;

int main() {
  string word;
  int page;
  vector<P> list;
  while (cin >> word >> page) {
    list.push_back(P(word, page));
  }
  sort(list.begin(), list.end());
  word = "";
  for (vector<P>::iterator it=list.begin(); it!=list.end(); it++) {
    if (word != it->first) {
      if (!word.empty()) cout << endl;
      word = it->first;
      cout << word << endl;
      cout << it->second;
    } else {
      cout << " " << it->second;
    }
  }
  cout << endl;
  return 0;
}
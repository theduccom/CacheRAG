#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

typedef map<string, vector<int> > M;

int main() {
  M pairs;
  string word;
  while (cin >> word) {
    int page;
    cin >> page;
    pairs[word].push_back(page);
  }
  for (M::iterator i = pairs.begin(); i != pairs.end(); ++i) {
    cout << i->first << endl;
    sort(i->second.begin(), i->second.end());
    for (vector<int>::iterator j = i->second.begin();
         j != i->second.end()-1; ++j)
      cout << *j << ' ';
    cout << i->second.back() << endl;
  }
  return 0;
}
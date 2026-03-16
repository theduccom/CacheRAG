#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
  map<string, vector<int> > m;
  set<string> name;
  string str;
  int ind;
  while (cin >> str >> ind) {
    m[str].push_back(ind);
    name.insert(str);
  }
  
  for (set<string>::iterator it = name.begin(); it != name.end(); it++) {
    cout << *it << endl;;

    sort(m[*it].begin(), m[*it].end());

    for (int j = 0; j < m[*it].size(); j++) {
      cout << m[*it][j];
      if (j != m[*it].size() - 1) {
	cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <map>
using namespace std;

int main() {
  map<string,int> m;
  m["A"] = m.size()-1;
  m["B"] = m.size()-1;
  m["AB"] = m.size()-1;
  m["O"] = m.size()-1;
  string s;
  int num[m.size()];
  fill(num, num+m.size(), 0);
  while(cin >> s) {
    replace(s.begin(), s.end(), ',', ' ');
    stringstream ss(s);
    int id;
    string kind;
    ss >> id >> kind;
    ++num[m[kind]];
  }
  for(int i = 0; i < m.size(); ++i) cout << num[i] << endl;

  return 0;
}
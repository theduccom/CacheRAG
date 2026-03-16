#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string str;
  vector<int> buf;
  int t;

  getline(cin, str);
  t=0;
  while ((t = str.find("apple", t)) != string::npos) {
    buf.push_back(t);
    t += 5;
  }
  t=0;
  while ((t = str.find("peach", t)) != string::npos) {
    str.replace(t, 5, "apple");
    t += 5;
  }
  for (vector<int>::iterator it=buf.begin(); it!=buf.end(); it++) {
    str.replace(*it, 5, "peach");
  }
  cout << str << endl;
  return 0;
}
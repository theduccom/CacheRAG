#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
  int n;

  cin >> n;
  cin.ignore();
  
  for (int i=0; i<n; i++) {
    string str;
    const string from = "Hoshino";
    const string to = "Hoshina";
    
    getline(cin, str);
    
    string::size_type pos = str.find(from);
    while (pos != string::npos) {
      str.replace(pos, from.size(), to);
      pos = str.find(from, pos + to.size());
    }

    cout << str << endl;
  }
}
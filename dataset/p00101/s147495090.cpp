#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  string str;
  int n;
  scanf("%d\n",&n);
  for(int i=0;i<n;i++) {
    getline(cin,str);
    for(unsigned int j=0;j<str.size();j++) {
      if(str.substr(j,7) == "Hoshino") {
        str.replace(j,7,"Hoshina");
      }
    }
    cout << str << endl;
  }
}
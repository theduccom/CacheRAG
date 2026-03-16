#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
  string str,compstr;
  int size;
  while(getline(cin , str)) {
    size = str.size();
    for(int i=0;i<size;i++) {
      if(str.substr(i,1) == "@") {
        for(int j=0;j<atoi(str.substr(i+1,1).c_str());j++) {
          //      cout << str.substr(i+2,1) << endl;
          compstr += str.substr(i+2,1);
        }
        i++;
        i++;
      }
      else {
        compstr += str.substr(i,1);
        //      cout << str.substr(i,1) << endl;
      }
    }
        cout << compstr << endl;
    compstr = "";
  }
}
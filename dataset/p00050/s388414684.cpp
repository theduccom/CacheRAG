#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  getline(cin, str);
 
  for(int i=0; i < str.length(); i++) {
    if     (str.substr(i, 5) == "apple")
    {
        str.replace(i, 5, "peach");i+=4;
    }
    else if(str.substr(i, 5) == "peach")
    {
        str.replace(i, 5, "apple");i+=4;
    }
  }
 
  cout << str << endl;
}
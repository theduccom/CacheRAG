#include <iostream>
using namespace std;

int main() {
  int A=0,B=0,AB=0,O=0,to;
  string str,type;
  while(getline(cin ,str)) {
    to = str.find(",");
    type = str.substr(to+1);
    if(type == "A")
      A++;
    if(type == "B")
      B++;
    if(type == "AB")
      AB++;
    if(type == "O")
      O++;
  }
  cout << A << endl << B << endl << AB << endl << O << endl;
}
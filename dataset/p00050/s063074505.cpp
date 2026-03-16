#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

main() {
  string sap = "apple";
  string spc = "peach";
  string s; getline(cin,s);
  unsigned int pos=0;
  while((pos=s.find(sap,pos)) != string::npos) {
    s.replace(pos,1,"1");
  }
  pos=0;
  while((pos=s.find(spc,pos)) != string::npos) {
    s.replace(pos,sap.length(),sap);
  }
  pos=0;
  while((pos=s.find("1",pos)) != string::npos) {
    s.replace(pos,spc.length(),spc);
  }
  cout << s << endl;
}
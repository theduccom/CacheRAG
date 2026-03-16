#include <iostream>
#include <string>

using namespace std;

int main() {

  string str;

  
  getline(cin,str);

  if(str.empty()) return 0;

  while(str.find("apple")!=string::npos) {

    str.replace(str.find("apple"),5,"_APE_");

  }

  while(str.find("peach")!=string::npos) {

    str.replace(str.find("peach"),5,"_PAH_");

  }

  while(str.find("_APE_")!=string::npos) {

    str.replace(str.find("_APE_"),5,"peach");

  }

  while(str.find("_PAH_")!=string::npos) {

    str.replace(str.find("_PAH_"),5,"apple");

  }

  cout << str << endl;

  return 0;

}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main (int argc, char const* argv[]){
  string str;
  int i;
  
  
  getline(cin,str);
  transform(str.begin(), str.end(), str.begin(), ::toupper);
  cout << str << endl;
  
  return 0;
}
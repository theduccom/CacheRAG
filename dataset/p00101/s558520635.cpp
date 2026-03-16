#include <iostream>
#include <string>
using namespace std;
/*
string HOSHINOtoHOSHINA(string str) {
  string str2(str);
  int idx = 0;
  int len = 7; // "Hoshina" has 7 character
  while( (idx = str2.find("Hoshino", idx)) >= 0) {
	str2.replace(idx, len, "Hoshina");
  }
  return str2;
}
*/
string replaceAAAtoBBB(const string& str) {
  string str2(str);
  string before = "Hoshino";
  string after = "Hoshina";
  int idx = 0;

  while( (idx = str2.find(before, idx)) >= 0) {
	str2.replace(idx, before.length(), after);
  }
  return str2;
}

int main() {
  int n;
  string buf;

  cin >> n;
  cin.ignore();
  
  for(int i = 0; i < n; ++i) {
	getline(cin, buf);
	//cout << HOSHINOtoHOSHINA(buf) << endl;
	cout << replaceAAAtoBBB(buf) << endl;
  }

  return 0;
}
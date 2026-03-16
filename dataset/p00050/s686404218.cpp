#include <iostream>

using namespace std;

string TMP = "-*-TeMporARY-*-";
string str1 = "apple";
string str2 = "peach";

int main() {
  string str;
  getline(cin, str);
  string::size_type pos;
  while ((pos = str.find(str1, 0)) != string::npos) {
    str.replace(pos, str1.length(), TMP);
  }
  while ((pos = str.find(str2, 0)) != string::npos) {
    str.replace(pos, str2.length(), str1);
  }
  while ((pos = str.find(TMP, 0)) != string::npos) {
    str.replace(pos, TMP.length(), str2);
  }
  cout << str << endl;
  return 0;
}
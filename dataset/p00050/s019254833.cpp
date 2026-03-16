#include <iostream>
#include <string>

using namespace std;

void swapstr_one(string &str, string fstr, string tstr) {
  int pos = str.find(fstr);
  while (true) {
    if (pos == string::npos)
      break;
    str.replace(pos, fstr.length(), tstr);
    pos = str.find(fstr, pos+1);
  }
}

void swapstr(string &str, string const &rstr1, string const &rstr2) {
  string tmp = rstr2;
  tmp[0] = '\n';

  swapstr_one(str, rstr1, tmp);
  swapstr_one(str, rstr2, rstr1);
  swapstr_one(str, tmp, rstr2);
}

int main() {
  string str;
  getline(cin, str);
  swapstr(str, "apple", "peach");
  cout << str << endl;
}

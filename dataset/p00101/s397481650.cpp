#include<iostream>
using namespace std;
void replaceAll(string& str, const string&pat, const string& rep) {
  string::size_type p = str.find(pat);
  while(p != string::npos) {
    str.replace(p, pat.length(), rep);
    p = str.find(pat, p + rep.length());
  }
}
int main(int argc, char *argv[])
{
  int n;
  cin >> n;
  { string str; getline(cin, str); }
  while(n--) {
    string str;
    getline(cin, str);
    replaceAll(str, "Hoshino", "Hoshina");
    cout << str << endl;
  }
  return 0;
}
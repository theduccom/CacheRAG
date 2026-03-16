#include <bits/stdc++.h>

using namespace std;

vector<string> split(const string &str, char delim = ' ') {
  stringstream ss(str);
  vector<string> res;
  for (string tmp; getline(ss, tmp, delim);) res.push_back(tmp);
  return res;
}

template<typename T = long long> inline T toInteger(const string&);

template<> inline int toInteger<int>(const string& s) {
  return stoi(s);
}

template<> inline long toInteger<long>(const string& s) {
  return stol(s);
}

template<> inline long long toInteger<long long>(const string& s) {
  return stoll(s);
}

template<typename T = long long> inline T toInteger(const string& s, int n) {
  T res = 0;
  for (char c : s) {
    if (isdigit(c)) res = res * n + c - '0';
    else if (isalpha(c)) res = res * n + tolower(c) - 'a' + 10;
  }
  return s[0] == '-' ? -res : res;
}

int main() {
  string line;
  int res1 = 0, res2 = 0;
  while (cin >> line) {
    auto v = split(line, ',');
    int a = toInteger<int>(v[0]);
    int b = toInteger<int>(v[1]);
    int c = toInteger<int>(v[2]);
    if (a * a + b * b == c * c) ++res1;
    if (a == b) ++res2;
  }
  cout << res1 << endl << res2 << endl;
}
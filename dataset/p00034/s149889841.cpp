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
  while (cin >> line) {
    auto d = split(line, ',');
    vector<int> l(10), v(2), s(10);
    for (int i = 0; i < 10; ++i) l[i] = toInteger<int>(d[i]);
    for (int i = 0; i < 2; ++i) v[i] = toInteger<int>(d[i + 10]);
    partial_sum(l.begin(), l.end(), s.begin());
    for (int i = 0; i < 10; ++i) {
      if (s[i] * v[1] >= (s.back() - s[i]) * v[0]) {
        cout << i + 1 << endl;
        break;
      }
    }
  }
}
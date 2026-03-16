#include <bits/stdc++.h>

using namespace std;

template<typename T> string to_string(const T& v) {
  string str;
  for (const auto& i : const_cast<T&>(v)) str += to_string(i) + " ";
  return str.substr(0, max(0, (int)str.size() - 1));
}

#ifdef __MINGW32__

template<> string to_string<int>(const int& v) {
  stringstream ss;
  ss << v;
  return ss.str();
}

template<> string to_string<long>(const long& v) {
  stringstream ss;
  ss << v;
  return ss.str();
}

template<> string to_string<long long>(const long long& v) {
  stringstream ss;
  ss << v;
  return ss.str();
}

template<> string to_string<unsigned int>(const unsigned int& v) {
  stringstream ss;
  ss << v;
  return ss.str();
}

template<> string to_string<unsigned long>(const unsigned long& v) {
  stringstream ss;
  ss << v;
  return ss.str();
}

template<> string to_string<unsigned long long>(const unsigned long long& v) {
  stringstream ss;
  ss << v;
  return ss.str();
}

template<> string to_string<float>(const float& v) {
  stringstream ss;
  ss << v;
  return ss.str();
}

template<> string to_string<double>(const double& v) {
  stringstream ss;
  ss << v;
  return ss.str();
}

template<> string to_string<long double>(const long double& v) {
  stringstream ss;
  ss << v;
  return ss.str();
}

#endif

int main() {
  int n;
  while (cin >> n) {
    int t = 1;
    vector<int> res;
    for (; n; n /= 2, t *= 2) if (n % 2) res.emplace_back(t);
    cout << to_string(res) << endl;
  }
}
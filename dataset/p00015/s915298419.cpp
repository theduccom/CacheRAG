#include <stddef.h>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
 
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s1, s2, s3 = "";
    cin >> s1 >> s2;
    size_t m = max(s1.size(), s2.size());
    while (s1.size() < m)
      s1.insert(s1.begin(), '0');
    while (s2.size() < m)
      s2.insert(s2.begin(), '0');
    char c = 0;
    auto it1 = s1.rbegin();
    auto it2 = s2.rbegin();
    for (; it1 != s1.rend(); it1++, it2++) {
      char add = *it1 - '0' + *it2 - '0' + c;
      char ch = add % 10 + '0';
      c = add / 10;
      s3.insert(s3.begin(), ch);
    }
    if (c) s3.insert(s3.begin(), c + '0');
    cout << ((s3.size() > 80) ? "overflow" :s3) << endl;
  }
}
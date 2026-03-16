#include <algorithm>
#include <iostream>
#include <cstdio>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <string.h>
using namespace std;

#define ISEQ(c) (c).begin(), (c).end()
typedef long long ll;

int main() {
  int dif = 'A' - 'a';
  string s;
  getline(cin, s);
  for (int i = 0; i < s.size(); i++) {
    if (isalpha(s[i]))
      s[i] += dif;
  }
  cout << s << endl;
}
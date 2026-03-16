#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int num[128];

int main() {
  num['I'] = 1;
  num['V'] = 5;
  num['X'] = 10;
  num['L'] = 50;
  num['C'] = 100;
  num['D'] = 500;
  num['M'] = 1000;

  string s;
  while(cin >> s) {
    reverse(s.begin(), s.end());
    int res = 0;
    for(int i = 0; i < s.size(); ++i) {
      if(i && num[s[i-1]] > num[s[i]]) {
	res -= num[s[i]];
      } else {
	res += num[s[i]];
      }
    }
    cout << res << endl;
  }
  return 0;
}
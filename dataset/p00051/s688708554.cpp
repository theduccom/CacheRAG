#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
  int N;
  cin >> N;
  while(N--) {
    string s, t;
    cin >> s;
    sort(s.begin(), s.end());
    t = s;
    reverse(t.begin(), t.end());
    cout << atoi(t.c_str()) - atoi(s.c_str()) << endl;
  }
}
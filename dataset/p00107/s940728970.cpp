#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  for (;;) {
    int s[3];
    for (int i = 0; i < 3; i++)
      cin >> s[i];
    if (!s[0] && !s[1] && !s[2]) return 0;
    sort(s, s+3);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
      int r;
      cin >> r;
      if (s[0]*s[0] + s[1]*s[1] < 4*r*r)
        cout << "OK" << endl;
      else
        cout << "NA" << endl;
    }
  }
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
  while(true) {
    int n;
    cin >> n;
    if(n == 0) break;
    vector<int> ices(10, 0);
    for(int i = 0; i < n; ++i) {
      int type;
      cin >> type;
      ++ices[type];
    }
    for(int i = 0; i < 10; ++i) {
      if(ices[i] == 0) {
        cout << '-' << endl;
      } else {
        for(int j = 0; j < ices[i]; ++j) cout << '*';
        cout << endl;
      }
    }
  }
  return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  while(1) {
    int n;
    cin >> n;
    if(n == 0) break;
    int num[10];
    fill(&num[0], &num[10], 0);
    for(int i = 0; i < n; i++) {
      int kind;
      cin >> kind;
      num[kind]++;
    }
    for(int j = 0; j < 10; j++) {
      if(num[j] == 0) cout << '-';
      for(int i = 0; i < num[j]; i++) {
	cout << '*';
      }
      cout << endl;
    }
  }
  return 0;
}
#include <iostream>
using namespace std;

int main() {
  int month;
  while(cin >> month) {
    if(month == -1) break;
    if(month <= 10) {
      cout << 4280 - 1150 << endl;
      continue;
    }
    if(month <= 20) {
      cout << 4280 - 1150 - 125*(month-10) << endl;
      continue;
    }
    if(month <= 30) {
      cout << 4280 - 1150 - 1250 - 140*(month-20) << endl;
      continue;
    }
    cout << 4280 - 1150 - 1250 - 1400 - 160*(month-30) << endl;
    continue;
  }
}
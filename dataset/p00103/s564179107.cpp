#include <iostream>
#include <string>

using namespace std;

int main() {
  int n, first = 0, second = 0, third = 0, out = 0, point = 0;
  cin >> n;
  for (int inning = 0; inning < n;) {
    string event;
    cin >> event;
    if (event == "HIT") {
      if (third) point++;
      third = second;
      second = first;
      first = 1;
    } else if (event == "HOMERUN") {
      point += first + second + third + 1;
      first = second = third = 0;
    } else if (event == "OUT") {
      out++;
      if (out == 3) {
        inning++;
        cout << point << endl;
        first = second = third = out = point = 0;
      }
    }
  }
}
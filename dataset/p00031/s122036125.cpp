#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  int weight[10];
  weight[0] = 1;
  for (int i = 1; i < 10; i++) {
    weight[i] = weight[i-1]*2;
  }

  int w;
  while (cin >> w) {
    vector<int> used_weight;
    int pos = 9;
    while (w > 0) {
      if (w - weight[pos] >= 0) {
        w -= weight[pos];
        used_weight.push_back(weight[pos]);
      }
      pos--;
    }

    for (int i = used_weight.size()-1; i >= 0; i--) {
      cout << used_weight[i] << (i?" ":"");
    }
    cout << endl;
  }

  return 0;
}
#include <iostream>

using namespace std;

int main () {
  int l[10];
  int v1, v2;
  
  while (cin >> l[0]) {
    cin.ignore();
    for(int i = 1; i < 10; i++) {
      cin >> l[i];
      cin.ignore();
    }
    cin >> v1;
    cin.ignore();
    cin >> v2;

    int l_total = 0;
    for(int i = 0; i < 10; i++) {
      l_total += l[i];
    }

    double cross = 1.0 * v1 * l_total / (v1 + v2);
    
    int l_partsum = 0;
    for(int i = 0; i < 10; i++) {
      l_partsum += l[i];
      if(cross <= l_partsum){
        cout << i + 1 << endl;
        break;
      }
    }
  }
}
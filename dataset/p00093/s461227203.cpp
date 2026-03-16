#include <iostream>
using namespace std;

int main() {
  int from,end,check,c=0;
  while(cin >> from >> end) {
    check = 0;
    if((from == 0) && (end == 0)) break;
    if(c != 0) cout << endl;
    for(int i=0;i<end - from + 1;i++) {
      if((from + i) % 4 == 0) {
        if((from + i) % 100 == 0) {
          if((from + i) % 400 == 0) {
            cout << from + i << endl;
            check = 1;
          }
        }
        else {
          cout << from + i << endl;
          check = 1;
        }
      }
    }
    if(check == 0)
      cout << "NA" << endl;
    c = 1;
  }
}
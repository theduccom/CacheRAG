#include <iostream>
using namespace std;

int main() {
  int loop = 0;
  while(1) {
    int a, b;
    cin >> a >> b;
    if(a == 0 && b == 0) break;
    if(loop >= 1) cout << endl;
    bool flag = false;
    for(int i = a; i <= b; i++) {
      if(i % 4 == 0) {
	if(i % 100 == 0 && i % 400 != 0) continue;
	else {
	  cout << i << endl;
	  flag = true;
	}
      }
    }
    if(!flag) cout << "NA" << endl;
    loop++;
  }
  return 0;
}
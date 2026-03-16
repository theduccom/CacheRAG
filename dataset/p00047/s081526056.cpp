#include <iostream>
using namespace std;
int main() {
  char x, y, commma;
  bool a[3] = {1, 0, 0};
  while(cin >> x >> commma >> y) {
	swap(a[x - 'A'], a[y - 'A']);
  }
  for(int i = 0; i < 3; ++i) {
	if(a[i]) {
	  cout << char((int)i + (char)'A') << endl;
	}
  }
  return 0;
}
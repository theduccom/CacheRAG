#include <iostream>
#include <string>
using namespace std;
void RunLength(string s) {
  int i = 0;
  while(i < (int)s.length()) {
	if(s[i] == '@') {
	  for(int j = 0; j < (s[i + 1] - '0'); ++j) {
		cout << s[i + 2];
	  }
	  i += 3;
	}
	else {
	  cout << s[i++];
	}
  }
  cout << endl;
}
int main() {
  string buf;
  while(cin >> buf) {
	RunLength(buf);
  }
  return 0;
}
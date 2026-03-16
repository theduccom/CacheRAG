#include <iostream>
#include <string>
using namespace std;

int main(void) {
  string s;
  int count;
  int flag;
  count = 0;
  while(cin >> s) {
    flag = 0;
    for(int i = 0; i < s.length()/2; i++) {
      if(s[i] != s[s.length()-1-i]) {
	flag = 1;
	break;
      }
    }
    if(flag == 0) count++;
  }
  cout << count << endl;
  return 0;
}
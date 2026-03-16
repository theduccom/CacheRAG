#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  while(cin >> s) {
    for(int i=0; i<s.size(); i++) {
      if(s[i]=='@') {
	int n;
	i++;
	n=(int)s[i]-48;
	i++;
	for(int j=0; j<n; j++) cout << s[i];
      } else cout << s[i];
    }
    cout << endl;
  }
  return 0;
}

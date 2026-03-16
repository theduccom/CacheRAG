#include <iostream>
#include <string>
using namespace std;

int main(void) {
  string str;
  int n;
  string temp;
  cin >> n;
  getchar();
  for(int i = 0; i < n; i++) {
    getline(cin, str);
    for(int j = 0; j < (int)str.length()-6; j++) {
      if(str[j] == 'H') {
	temp = str.substr(j, 7);
	if(temp == "Hoshino") {
	  str[j+6] = 'a';
	}
      }
    }
    cout << str << endl;
  }
  return 0;
}
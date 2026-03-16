#include <iostream>
#include <string>

using namespace std;

int main() {
  string str;
  while(getline(cin, str)) {
    for(int i = 0; i < str.length(); i++) {
      if(str[i] == '@') {
	i++;
	int num = (int)str[i] - (int)'0';
	i++;
	for(int j = 0; j < num; j++) {
	  cout << str[i];
	}
      } else {
	cout << str[i];
      }
    }
    cout << endl;
  }
  return 0;
}
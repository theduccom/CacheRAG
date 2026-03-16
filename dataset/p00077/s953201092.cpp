#include <iostream>
#include <string>
using namespace std;

int main() {

  string str;
  while(cin >> str) {

    string ans;
    for(int i=0;i<str.size();i++){
      if(str[i] == '@') {
	i++;
	for(int j=0;j<str[i]-'0';j++)  ans += str[i+1];
	i++;
      }
      else ans += str[i];
    }

    cout << ans <<endl;

  }

  return 0;

}
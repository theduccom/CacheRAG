#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  int cnt[4] = {0,0,0,0};
  string str;
  while(getline(cin, str)) {
    int i;
    for(i = 0; i < str.size() && str[i] != ','; ++i);
    str = str.substr(i+1);
    int id;
    if(str == "A") id = 0;
    else if(str == "B") id = 1;
    else if(str == "AB") id = 2;
    else id = 3;
    ++cnt[id];
  }
  for(int i = 0; i < 4; ++i) cout << cnt[i] << endl;
  return 0;
}
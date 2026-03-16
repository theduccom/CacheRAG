#include <iostream>
using namespace std;

int main() {
  int hit,size,ans=0;
  string str;
  while(cin >> str) {
    size = str.size();
    hit = 0;
    for(int i=0;i<(size-1.0)/2.0;i++) {
      if(str.substr(i,1) == str.substr(size-i-1,1))
        hit = 1;
      else {
        hit = 0;
        break;
      }
    }
    if(size == 1) {
      hit = 1;
    }
    ans += hit;
  }
   cout << ans << endl;
}
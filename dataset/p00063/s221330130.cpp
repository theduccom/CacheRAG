#include <iostream>
using namespace std;

int main(void){
  string s;
  int cnt = 0;
  while(cin >> s){
    int left = 0, right = s.length()-1;
    while(left <= right){
      if(s[left] != s[right]) break;
      left++;
      right--;
    }
    if(right < left) cnt++;
  }
  cout << cnt << endl;
  return 0;
}
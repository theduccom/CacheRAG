#include <iostream>
#include <queue>
using namespace std;


int check(char c){
  if(c == 'I') return 1;
  else if(c == 'V') return 5;
  else if(c == 'X') return 10;
  else if(c == 'L') return 50;
  else if(c == 'C') return 100;
  else if(c == 'D') return 500;
  else if(c == 'M') return 1000;
}

int main(void){
  string str;
  while(cin >> str){
    int ans = 0;
    for(int i = 0; i < str.size() - 1; i++){
      if(check(str[i]) >= check(str[i+1])) ans += check(str[i]);
      else ans -= check(str[i]);
    }
    ans += check(str[str.size() - 1]);
    cout << ans << endl;
  }
  return 0;
}
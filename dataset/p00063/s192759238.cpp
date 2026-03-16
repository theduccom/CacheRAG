#include <iostream>
using namespace std;
int main(){
  char ch;
  string str;
  int ans = 0;
  while(cin >> str){

    int f = 1;

    for(int i = 0; i <= (int)str.size()/2 ; i++){

      if(str[i] != str[str.size()-1 - i])f = 0;

    }
    if(f)ans++;
  }
  cout << ans << endl;
  return 0;
}
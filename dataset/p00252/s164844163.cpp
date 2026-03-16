#include <iostream>

using namespace std;

int main(){
  int ans = 0;
  int b[4];
  for(int i = 0 ; i < 3; i++){
    cin >> b[i];
    if(b[i]){
      ans += (1 << (2-i));
    }
  }
  cout << ((ans == 1 || ans == 6)?"Open":"Close") << endl;
}
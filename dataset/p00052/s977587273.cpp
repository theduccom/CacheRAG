#include<iostream>
using namespace std;

int main(){

  int n,ans;

  while(cin >> n, n){
    ans = 0;
    while(n >= 5){
      ans += n / 5;
      n = n / 5;
    }
    cout << ans << endl;
  }

}
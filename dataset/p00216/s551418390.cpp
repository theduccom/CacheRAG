#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int n;
  while(1){
    cin >> n;
    if(n == -1) break;

    int ans = 0;

    for(int i=11;i<=n;i++){
      if(i > 30) ans += 160;
      else if(i > 20) ans += 140;
      else ans += 125;
    }

    cout << 4280 - (ans + 1150) << endl;

  }
}
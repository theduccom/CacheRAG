#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  double a, ans;
  while(cin >> a){
    ans = a;
    for(int i = 2; i <= 10; i++){
      if(i % 2 == 0) a *= 2;
      else a /= 3; 
      ans += a; 
    }
    cout << fixed << setprecision(8) << ans << endl; 
  }
}
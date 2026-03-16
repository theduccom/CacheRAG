#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  double s,ans;
  while(cin>>s){
    ans = s;
    for(int i=2;i<=10;i++){
      if(i%2==0){
	s *= 2;
	ans += s;
      }
      else{
	s /= 3;
	ans += s;
      }
    }
    cout << fixed << setprecision(6) << ans << endl;
  }
  return 0;
} 
#include <iostream>
#include <cstdio>
using namespace std;
int main(){
  double n,ans;
  while(  cin >> n){
    ans = n;
    for(int i = 2 ; i <= 10 ; i++){
      if(i%2 == 1){
	n = n/3.0;
	ans += n;
      }
      else{
	n*=2.0;
	ans +=n;
      }
    }
    printf("%.6f\n",ans);
  }
}
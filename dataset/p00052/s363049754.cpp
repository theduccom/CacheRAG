#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int count(long long int *num){
  int a=0;
  while(1)
    if((*num) % 10 == 0){
      a++;
      *num /= 10;
    }
    else 
      return a;
}

int main(){
  long long int n;
  
  while(cin >> n){
    if(n==0)
      break;
    
    long long int a, b, ans;
    for(a=1,ans=0;n>1;n--){
      a *= n;
      for(;a%10==0;a/=10)
	ans++;
      if((b=a/100000) != 0)
	a -= b*100000;
    }
    
    cout << ans << endl;
  }
  return 0;
}
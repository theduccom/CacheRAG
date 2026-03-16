#include<bits/stdc++.h>
using namespace std;
int main(){
  
  int n;
  while(1){
    cin >>n;
    if(n == -1)break;
    int ans=0;
    if(n <= 10){
      ans = 1150;
    }
    else if(n/10 == 1 || n==20 ){
      ans = 1150 + (n-10)*125;
    }
    else if(n/10 == 2 || n==30){
      ans = 1150 + 10*125 + (n-20)*140;
    }
    else{
      ans = 1150 + 10*125 + 10 *140 + (n-30)*160;
    }
    cout << 4280-ans << endl;
    
  }
    return 0;
}
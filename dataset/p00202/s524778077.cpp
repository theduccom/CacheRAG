#include<iostream>
#include<string>

using namespace std;

bool dp[1000001];

bool isPrime(int x){
  int i, flag=0;
  for(i=2; i*i<=x; i++){
    if(x%i==0){
      flag += 1;
    }
  }
  if(flag==0){
    return true;
  }else{
    return false;
  }
}

int solve(int x){
  int temp = x;
  while(1){
    if(dp[temp] && isPrime(temp)){
      return temp;
    }
    temp--;
  }
}
int main(){
  int dish, budget, dishPrice[30], i, j;
  while(cin >> dish >> budget, dish+budget){
    for(i=1; i<=budget; i++){
      dp[i] = false;
    }
    dp[0] = true;
    for(i=0; i<dish; i++){
      cin >> dishPrice[i];
      for(j=dishPrice[i]; j<=budget; j++){
        if(dp[j-dishPrice[i]]){
          dp[j] = true;
        }
      }
    }
    int ans = solve(budget);
    if(ans){
      cout << ans << endl;
    }else{
      cout << "NA" << endl;
    }
  }
}
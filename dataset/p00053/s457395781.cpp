#include<iostream>
#include<vector>
#define MAX  999999
bool prime[MAX];
using namespace std;

int main(void){
  int n ;
  
  vector<int> dp(0,0);
  //isPrime();

  fill(prime,prime+MAX,true);
  int cnt = 0;
  prime[0]=prime[1]=false;
  for(int i = 2 ; i < MAX ; i ++){
    if(prime[i]){
      cnt += i;
      for(int j = 2 ; j * i < MAX ; j ++){
        prime[i*j] = false;
      }
    dp.push_back(cnt);
    }
  }  
  
  
  while(cin>>n,n)
  cout<<dp[n-1]<<endl;
}
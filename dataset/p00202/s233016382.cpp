#include <iostream>
#define MAX 1000001
#define INF 1<<27
using namespace std;
bool isPrime(int n){
  if(n == 0 || n == 1)return false;
  for(int i = 2 ; i*i <= n ; i++ ){
    if(n%i == 0)return false;
  }
  return true;
}

int main(){
  int n,yosan;
  int dp[MAX];
  while(cin >> n >> yosan,n){
    fill(dp,dp + MAX,0);
    dp[0] = 1;
    for(int i = 0 ; i < n ; i++ ){
      int a;
      cin >> a; 
      for(int j = a ; j <= yosan ; j++ ){
	if( dp[j - a] )dp[j] = 1;
      }
    }
    int res = -1;
    for(int i = yosan ; i >= 0 ; i-- ){
      if( isPrime(i) && dp[i] ){
	res = i;
	break;
      }
    }
    if(res == -1)cout << "NA" << endl;
    else cout << res << endl; 
  }
}
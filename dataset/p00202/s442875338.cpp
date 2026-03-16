#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

#define MAX 1000001

vector<int> vprimes;
bool *isPrime = new bool[MAX];

void MakePrime(){
  isPrime[0]=false;
  isPrime[1]=false;
  isPrime[2]=true;
  for(int i = 2; i < MAX; ++i){
    isPrime[i] = true;
  }
  for(long long int i = 2; i < MAX; ++i){
    if( isPrime[i] ){
      for(long long int j = 2; i * j < MAX; ++j) {
	isPrime[i*j] = false;
      }
    }
  }
  for(int i = 0; i < MAX; ++i){
    if( isPrime[i] ){
      vprimes.push_back( i );
    }
  }
}

int main()
{
  MakePrime();
  while(true){
    int n,x;
    int ans = 0;
    vector<int> menu;
    cin >> n >> x;
    if( n == 0 && x == 0 )break;
    int dp[1+x];
    for(int i = 0; i < n; ++i){
      int v;
      cin >> v;
      menu.push_back( v );
    }

    fill(dp,dp+1+x,0);
    dp[0]=1;
    for(int i = 0; i < 1+x; ++i){
      if( dp[i] ){
	//cout << i << endl;
	for(int k = 0; k < menu.size(); ++k){
	  if( i + menu[k] < 1+x ){

	    dp[ i + menu[k] ] = 1;
	  }
	}
      }
    }
    for(int i = x; i>=0; --i){
      if( dp[i] && isPrime[i] ){
	ans = max(ans, i);
	break;
      }
    }
    if( ans ==0 ){
      cout << "NA" << endl;
    }else{
      cout << ans << endl;
    }
  }
  return 0;
}
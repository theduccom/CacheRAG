#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
#define loop(i,b,a) for(int i = b ; i < a; i ++)
#define rep(i,a) for(int i = 0 ; i < a; i ++)
int main(void){
  const int MAX = 600000;
  bool prime[MAX];
  rep(i,MAX) prime[i] = true;
  
  prime[0] = prime[1] = false;
  vector<int> box;
  loop(i,2,MAX){
    if(prime[i]){
      for(int j = i + i ;  j < MAX ; j += i){
	prime[j] = false;
      }
    }
  }
  
  int n;
  while(cin>>n,n){
  int cnt = 0;
    rep(i,n/2+1){
      if(prime[i] && prime[n-i]){
	cnt++;
	//cout<<i<<" "<<n-i<<endl;
      }
    }
    cout<<cnt<<endl;
  }
  
}
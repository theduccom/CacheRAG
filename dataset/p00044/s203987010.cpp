#include<iostream>
#include<vector>
#include<cmath>
#include<map>
#include<cstdio>
using namespace std;
#define rep(i,a) for(int i = 0 ; i < a; i ++)
#define loop(i,b,a) for(int i = b ; i < a; i ++)
const int MAX = 1000000;
int main(void){
  bool prime[MAX];
  rep(i,MAX)prime[i] = true;
  prime[0] = prime[1] = false;
  loop(i,2,i * i){
    if(prime[i]){
      for(int j = i + i ; j < MAX ; j += i){
	prime[j] = false;
      }
    }
  }
  //rep(i,100)if(prime[i])cout<<i<<endl;
  int n;
  while(cin>>n){
    int mi,ma;
    mi = n-1; 
    ma = ++n;
    while(!prime[mi]){
      mi--;
    }
    while(!prime[ma]){
      ma++;
    }
    
    cout<<mi<<" "<<ma<<endl;
  }
}
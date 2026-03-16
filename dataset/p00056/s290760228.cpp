#include<bits/stdc++.h>
using namespace std;

bool prime[100010];
int ans[100010];
void countPrime();

int main(){
  int n;
  countPrime();
  while(cin >> n , n){
    cout << ans[n] << endl;
  }
}

void countPrime(){
  memset(prime,true,100001);
  memset(ans,0,100001);
  for(int i=2;i*i<=50000;i++){
    if(prime[i]){
      for(int j=i*i;j<=50000;j=j+i){
	prime[j]=false;
      }
    }
  }
  for(int i=2;i<50000/2+1;i++){
    for(int j=i;j<50000+1;j++){
      if(prime[i] && prime[j]){
	ans[i+j]++;
      }
    }
  }
}
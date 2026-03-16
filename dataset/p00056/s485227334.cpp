#include<bits/stdc++.h>
using namespace std;

bool isprime[50001];

void eratos(int n){
  
  for(int i=0  ; i <= n ; i++){
    isprime[i]=true;
  }
  isprime[0]=isprime[1]=false;
  for(int i=2 ; i <= sqrt(n) ; i++){
    if(isprime[i]){
      int j=i+i;
      while(j <= n){
	isprime[j]=false;
	j=j+i;
      }
    }
  }

}

int main(){
  
  eratos(50000);
  
  int n;
  while(1){
    cin >>n;
    if(n == 0)break;
    int ans=0;
    for(int i=0 ; i <= n/2 ; i++){
      if(isprime[i] && isprime[n-i])ans++;
    }
    cout <<ans<<endl;
  }
  
  return 0;
}
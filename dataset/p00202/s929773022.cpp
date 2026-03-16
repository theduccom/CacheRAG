#include <iostream>
#include <cstdio>
#define MAX 1000000
using namespace std;

bool prime[MAX+1];

bool hurui(){
  for(int i=0;i<MAX;i++){prime[i]=true;}
  prime[0]=prime[1]=prime[2]=true;
  
  for(int i=2;i<MAX;i++){
    if(prime[i]){
      for(int j=2*i;j<MAX;j+=i)prime[j]=false;
    }
  }
}


int main(){
  hurui();
  
  for(;;){
    int n,x;
    cin >> n >> x;
    if(n==0)return 0;
    
    int kane[n];
    for(int i=0;i<n;i++)
      cin >> kane[i];
    
    bool dp[x+1];
    for(int i=0;i<=x;i++)dp[i]=false;
    dp[0]=true;
    
    for(int i=0;i<=x;i++){
      if(dp[i]){
	for(int j=0;j<n;j++){
	  if(i+kane[j]<=x)dp[i+kane[j]]=true;
	}
      }
    }

    //cout << "aa";
    for(int i=x;i>=0;i--){
      if(i==0){
	cout << "NA" << endl;
	break;
      }
      if(dp[i]&&prime[i]){
	cout << i << endl;
	break;
      }
    }
  } 
  
}
#include<iostream>
#include<cmath>
#define NUM 1000000
using namespace std;
int main(){
  int n, prime[NUM+1], p[NUM+1], count, sum;
  prime[1]=0;
  for(int i=2; i<NUM+1; i++){
    prime[i] = 1;
    p[i-2]=0;
  }
  for(int i=2; i<=NUM/2; i++){
      for(int j=2; i*j <= NUM; j++){
      	  prime[i*j]=0;
      }
  }
  count=0;
  for(int i=2; i<=NUM; i++){
    if(prime[i] == 1){
      p[count] = i;
      count++;
    }
  }
  while(cin >> n){
    if(n == 0) return 0;
    sum=0;
    for(int i=0; i<n; i++){
      sum+=p[i];
    }
    cout << sum << endl; 
  }  
}
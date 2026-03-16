#include<iostream>
#define NUM 100000
using namespace std;
int main(){
  int n, prime[NUM+1], x1,x2;
  prime[1]=0;
  for(int i=2; i<NUM+1; i++) prime[i] = 1;
  for(int i=2; i<=NUM/2; i++){
      for(int j=2; i*j <= NUM; j++){
      	  prime[i*j]=0;
      }
  }

  while(cin >> n){
    if(n < 3 || n > 50000) return 0;
    for(int i=1; i<NUM; i++){
      if(prime[n-i] == 1){
      	  x1 = n-i;
      	  break;
      }
    }
    for(int i=1; i<NUM; i++){
      if(prime[n+i] == 1){
      	  x2 = n+i;
      	  break;
      }
  	}
  	
  	cout << x1 << " " << x2 << endl;

  }
  return 0;
  
}
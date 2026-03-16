#include<iostream>
#include<math.h>

using namespace std;

int prime[60000];

void makeprimechart(void);

int main(){

  makeprimechart();

  int n, max, min;

  while(cin >> n){

    for(int i = n+1; i < 60000; i++){
      if(prime[i] == 1){
	max = i;
	break;
      }
    }
    
    for(int i = n-1; i > 1; i--){
      if(prime[i] == 1){
	min = i;
	break;
      }
    }
    
    cout << min << " " << max << endl;
  } 
  return 0;
  
}


void makeprimechart(void){

  for(int i = 0; i < 60000; i++){
    prime[i] = 1;
  }

  prime[0] = 0;
  prime[1] = 0;


  for(int i = 2; i < sqrt(60000); i++){
    if(prime[i] == 1){
      for(int j = i * 2; j < 60000; j+=i){
	prime[j] = 0;
      }
    }
  }
}
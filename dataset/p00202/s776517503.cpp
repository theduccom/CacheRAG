#include <iostream>

#define MAX 1000001

bool is_prime[MAX];
bool is_pay[MAX];

int main(int argc,char* argv[]){
  is_prime[0] = is_prime[1] = false;
  for(int i = 2; i < MAX; i++){
    is_prime[i] = true;
  }
  for(int i = 2; i < 1001; i++){
    if(is_prime[i]){
      for(int j = 2*i; j < MAX; j += i){
	is_prime[j] = false;
      }
    }
  }
  
  while(true){
    int n,x;
    std::cin >> n >> x;
    
    if(n == 0 && x == 0){
      break;
    }
    
    for(int i = 1; i <= x; i++){
      is_pay[i] = false;
    }

    is_pay[0] = true;
    
    int array[n];
    for(int i = 0; i < n; i++){
      std::cin >> array[i];
    }
    
    for(int t = 0; t < n; t++){
      for(int i = x; i >= 0; i--){
	if(is_pay[i]){
	  for(int j = i + array[t]; j <= x; j += array[t]){
	    is_pay[j] = true;
	  }
	}
      }
    }

    bool found = false;
    for(int i = x; i >= 0; i--){
      if(is_pay[i] && is_prime[i]){
	found = true;
	std::cout << i << std::endl;
	break;
      }
    }

    if(!found){
      std::cout << "NA" << std::endl;
    }
  }


  return 0;
  
}
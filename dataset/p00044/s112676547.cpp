#include <iostream>
using namespace std;
 
int main(){
  bool is_prime[100000];
 
  is_prime[0]=is_prime[1]=false;
  for(int i=2;i<100000;i++){
    is_prime[i] = true;
  }
 
  for(int i=2;i*i<100000;i++){
    if(is_prime[i]){
      for(int j=i*i;j<100000;j=j+i){
        is_prime[j] = false;
      }
    }
  }
 
  while(true){
    int n;
    cin >> n;
 
    if(cin.eof())
        break;
 
    int high = n;
    int low = n;
 
    while(1){
      high = high+1;
      if(is_prime[high]){
        break;
      }
    }
 
    while(1){
      low = low-1;
      if(is_prime[low]){
        break;
      }
    }
 
    cout << low << " " << high << endl;
  }
 
  return 0;
}

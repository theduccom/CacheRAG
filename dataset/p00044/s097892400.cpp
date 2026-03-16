#include<iostream>
using namespace std;

void prime(int a){
  int cnt1=a+1;
  int cnt2=a-1;
  bool is_prime[1000000];
  is_prime[0] = is_prime[1] = false;
  for(int i=2;i<1000000;i++){
    is_prime[i] = true;
  }
  for(int i=2;i*i<1000000;i++){
    if(is_prime[i]){
      for(int j=i*i;j<1000000;j+=i){
        is_prime[j] = false;
      }
    }
  }
  while(1){
    if(is_prime[cnt2]){
      cout << cnt2 << " ";
      break;
    }
    cnt2--;
  }

  while(1){
    if(is_prime[cnt1]){
      cout << cnt1 << endl;
      break;
    }
    cnt1++;
  }

}

int main(){
  while(1){
    int num;
    cin >> num;
    if(cin.eof())
      break;

    prime(num);
  }
  return 0;
}

#include<iostream>
#include<math.h>

using namespace std;

int main(){

  int prime[1000000];

  for(int i = 0; i < 1000000; i++) prime[i] = 1;

  prime[0] = 0;
  prime[1] = 0;

  for(int i = 2; i < sqrt(1000000); i++){
    if(prime[i] == 1) for(int j = i*2; j < 1000000; j+=i) prime[j] = 0;
  }


  while(1){

    int in;

    cin >> in;
    if(in == 0) break;
    int out = 0, sum = 0;
    for(int i = 0; out < in; i++){
      if(prime[i] == 1){
	out++;
	sum += i;
      }

    }

    cout << sum << endl;
  }

  return 0;
}
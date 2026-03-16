#include<iostream>

using namespace std;

int main(){

  int n;
  int data[10001];
  for(int i = 0; i <= 10000; i++) data[i] = 1;


  for(int i = 2; i <= 100; i++){
    for(int j = i*2; j <= 10000; j+=i){
      data[j] = 0;
    }
  }
  while(1){
    cin >> n;
    if(n == 0) break; 
    for(int i = n; i >= 5; i--){
      if(data[i] == 1 && data[i-2] == 1){
	cout << i-2 << " " << i << endl;
	break;
      }
    }
  }
  return 0;

}
#include <iostream>

using namespace std;

int main(){

  const int NUM = 50100;
  bool prime[NUM];
  prime[0] = false;
  prime[1] = false;
  for(int i=2;i<NUM;i++)
    prime[i] = true;
  for(int i=2;i*i<NUM;i++)
    for(int k=2;i*k<NUM;k++)
      prime[i*k]=false;

  int n,i;
  while(cin>>n){
    for(i=n-1;!prime[i];i--);
    cout << i << " ";
    for(i=n+1;!prime[i];i++);
    cout << i << endl;    
  }
  return 0; 

}
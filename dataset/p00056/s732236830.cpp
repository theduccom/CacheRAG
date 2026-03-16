#include <iostream>
using namespace std;
int main(){
  const int NUM = 50000;
  bool prime[NUM];
  prime[0] = false;
  prime[1] = false;
  for(int i=2;i<NUM;i++)
    prime[i] = true;
  for(int i=2;i*i<NUM;i++)
    for(int k=2;i*k<NUM;k++)
      prime[i*k]=false;

  int n,c;
  while(true){
    cin>>n;
    if(!n)break;
    c = 0;
    for(int i=2;i<=n/2;i++)
      if(prime[i]&&prime[n-i])
	c++;
    cout << c << endl;
  }
  return 0;
}
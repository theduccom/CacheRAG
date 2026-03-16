#include<iostream>
#include<string.h>
using namespace std;

int isprime[50101];

int main() {
  memset(isprime, 0, sizeof(isprime));
  for(int i=4; i<50101; i+=2) isprime[i] = 1;
  isprime[1] = 1;
  for(int i=3; i*i<50101; i+=2)
    if(isprime[i] == 0)
      for(int j=2; i*j<50101; ++j)
	isprime[i*j] = 1;

  int n;
  while(cin>>n) {
    for(int k=n-1; k>0; --k)
      if(isprime[k] == 0) {
	cout<<k<<" ";
	break;
      }

    for(int k=n+1; k<50101; ++k)
      if(isprime[k] == 0) {
	cout<<k<<endl;
	break;
      }
  }
}
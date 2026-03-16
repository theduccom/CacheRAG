#include<iostream>
using namespace std;

int isprime[104730] = { 0 };

int main() {

  for(int i=4; i<104730; i+=2)
    isprime[i] = 1;

  isprime[1] = 1;
  for(int i=3; i*i < 104730; i++)
    if(isprime[i] == 0)
      for(int j=2; i*j < 104730; j++)
	isprime[i*j] = 1;

  int n;
  while(1) {
    cin>>n;
    if(!n) break;
    int sum=0;
    for(int i=2;n>0;i++){
      if(isprime[i] == 0) {
	sum += i;
	n--;
      }
    }
    cout<<sum<<endl;
  }
}
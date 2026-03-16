#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

#define REP(i,a,n) for(int i=(a); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define DEB 0

bool primes[50000];

void make_prime(){
  primes[0]=primes[1]=true;
  for(int i=2; i*i<=50000; i++)if( !primes[i] ){
      for(int j=i*2; j<50000; j+=i)primes[j]=true;
    }
}

int main(){
  int n;
  make_prime();
  while(scanf("%d",&n),n){
    if( n<4 ){
      puts("0"); continue;
    }
    int cnt = 0;
    for(int i=2; i<=n/2; i++){
      if( !primes[i] && !primes[n-i] ){
	cnt++;
      }
    }
    printf("%d\n",cnt);
  }
  return 0;
}
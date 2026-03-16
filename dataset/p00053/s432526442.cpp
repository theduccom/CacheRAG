#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

#define REP(i,a,n) for(int i=(a); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define DEB 0
#define MAX 110000

bool tmp[MAX];
int primes[11000];
int sz;

void make_prime(){
  tmp[0]=tmp[1]=true;
  for(int i=2; i*i<=MAX; i++){
    if( !tmp[i] ){
      for(int j=i*2; j<MAX; j+=i){
	tmp[j]=true;
      }
    }
  }
  primes[sz++] = 2;
  for(int i=3; i<MAX; i+=2){
    if( !tmp[i] ){
      primes[sz++] = i;
    }
  }
}
int main(){
  int n;
  make_prime();
  
  while(scanf("%d",&n),n){
    int sum = 0;
    rep(i,n){
      sum += primes[i];
    }
    printf("%d\n",sum);
  }
  return 0;
}
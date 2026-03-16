#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  int n,sum;
  while(scanf("%d",&n),n){
    sum = 0;
    while( n/=5 )sum+=n;
    printf("%d\n",sum);
  }
  return 0;
}
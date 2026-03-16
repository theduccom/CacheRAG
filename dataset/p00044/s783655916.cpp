#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int sosu[66666];
main(){
  for(int i=2;i<=60000;i++){
    if(sosu[i]==1) continue;
    for(int j=i*2;j<=60000;j+=i){
      sosu[j]=1;
    }
  }
   
  int N;
  while(~scanf("%d",&N))
    {
      int i=N-1;
      while(sosu[i]) i--;
      printf("%d ",i);
      i=N+1;
      while(sosu[i]) i++;
      printf("%d\n",i);
    }
}
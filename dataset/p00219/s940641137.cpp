#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
  int n,a;
  while(cin>>n,n!=0){
    int d[10]={0};
    for(int i=0;i<n;i++){
      cin>>a;
      d[a]++;
    }
    for(int i=0;i<10;i++){
      if(d[i]==0)printf("-");
      for(int j=0;j<d[i];j++){
	printf("*");
      }
      printf("\n");
    }
  }
  return 0;
}
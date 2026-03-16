#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;

int main(){

  int n,i,j,a;

  while(1){

  int data[100000]={0};

  scanf("%d",&n);

  if(n==0)break;

  for(i=0;i<n;i++){
    scanf("%d",&a);
    data[a]++;
  }

  for(i=0;i<10;i++){
    if(data[i]==0){
      printf("-");
    }
    else {
      for(j=0;j<data[i];j++){
	printf("*");
      }
    }
    printf("\n");
  }

  }
  return 0;
}
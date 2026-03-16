#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
  int n,index,ice[10];
  while(1){
    scanf("%d",&n);
    if(n==0) break;

    fill(ice,ice+10,0);
    for(int i=0;i<n;i++){
      scanf("%d",&index);
      ice[index]++;
    }
    for(int i=0;i<10;i++){
      if(ice[i]==0) printf("-\n");
      else{
	for(int j=0;j<ice[i];j++){
	  printf("*");
	}
	printf("\n");
      }
    }
  }
  return 0;
}


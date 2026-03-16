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
  int n,pm[10005],pe[10005],pj[10005];

  while(1){
    scanf("%d",&n);
    if(n==0) break;
    
    for(int i=0;i<n;i++){
      scanf("%d %d %d",&pm[i],&pe[i],&pj[i]);
      if(pm[i]==100||pe[i]==100||pj[i]==100){
	printf("A\n");
      }else if(pm[i]+pe[i]>=180){
	printf("A\n");
      }else if(pm[i]+pe[i]+pj[i]>=240){
	printf("A\n");
      }else if(pm[i]+pe[i]+pj[i]>=210){
	printf("B\n");
      }else if(pm[i]+pe[i]+pj[i]>=150&&(pm[i]>=80||pe[i]>=80)){
	printf("B\n");
      }else printf("C\n");
    }
  }

  return 0;
}


#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){

  int n;
 
  while(1){
    scanf("%d",&n);
    if(n==0) break;
    
    int tbl[11][11]={{0}};
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
	scanf("%d",&tbl[i][j]);
	tbl[i][n] += tbl[i][j];
	tbl[n][j] += tbl[i][j];
	tbl[n][n] += tbl[i][j];
      }
    }
    
    for(int i=0;i<=n;i++){
      for(int j=0;j<=n;j++){
	printf("%5d",tbl[i][j]);
      }
      printf("\n");
    }
  }

  return 0;

}
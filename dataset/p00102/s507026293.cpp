#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int n;
  while(true){
  cin>>n;
  if(!n)break;
  int table[n+1][n+1];
  for(int y=0;y<n;y++){
    int s = 0;
    for(int x=0;x<n;x++){
      cin>>table[x][y];
      s+=table[x][y];
    }
    table[n][y] = s;
  }
  for(int x=0;x<n+1;x++){
    int s = 0;
    for(int y=0;y<n;y++){
      s+=table[x][y];
    }
    table[x][n] = s;
  }
  for(int y=0;y<n+1;y++){
    for(int x=0;x<n+1;x++){
      printf("%5d",table[x][y]);
    }
    printf("\n");
  }
  }
  return 0;
}
#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

int main(){
  while(1){
    int n;
    char line[100];
    cin>>n;
    if(n==0)return 0;
    int list[11][11];
    for(int i=0;i<n+1;i++){
      for(int j=0;j<n+1;j++){
	list[i][j]=0;
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
	cin>>list[i][j];
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
	list[i][n]+=list[i][j];
	list[n][i]+=list[j][i];
      }
    }
    for(int i=0;i<n;i++){
      list[n][n]+=list[n][i];
    }
    for(int i=0;i<n+1;i++){
      for(int j=0;j<n+1;j++){
	printf("%5d",list[i][j]);
      }
      printf("\n");
    }
  }
}
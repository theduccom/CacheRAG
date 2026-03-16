#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  while(1){ 
    cin>>n;
    if(!n)break;
    int data[12][12]={0};
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
	cin>>data[i][j];
	data[n][j]+=data[i][j];
	data[i][n]+=data[i][j];
      }
      data[n][n]+=data[i][n];
    }
    for(int i=0;i<=n;i++){
      for(int j=0;j<=n;j++){
	printf("%5d",data[i][j]);
      }
      printf("\n");
    }
  }
}
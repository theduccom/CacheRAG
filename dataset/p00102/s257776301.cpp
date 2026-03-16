#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  while(cin>>n,n!=0){
    int hyou[n][n];
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
	cin>>hyou[i][j];
      }
    }
    int hyoup[n+1][n+1]={0};
    hyoup[0][n]=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
	hyoup[i][j]=hyou[i][j];
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
	hyoup[i][n]+=hyou[i][j];
	hyoup[n][i]+=hyou[j][i];
      }
    }
    for(int i=0;i<n;i++)
      hyoup[n][n]+=hyoup[n][i];
    for(int i=0;i<n+1;i++){
      for(int j=0;j<n+1;j++){
	printf("%5d",hyoup[i][j]);
      }
      cout<<endl;
    }
  }
  return 0;
}
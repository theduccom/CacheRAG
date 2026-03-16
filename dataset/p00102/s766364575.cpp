#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,sumw,sumh;
  while(1){
    cin>>n;
    if(n==0)break;
    int array[n+1][n+1];
    for(int i=0;i<n;i++){
      sumw=0;
      for(int j=0;j<n;j++){
	cin>>array[i][j];
	sumw+=array[i][j];
      }
      array[i][n]=sumw;
    }
    for(int i=0;i<n+1;i++){
      sumh=0;
      for(int j=0;j<n;j++){
	sumh+=array[j][i];
      }
      array[n][i]=sumh;
    }
    for(int i=0;i<n+1;i++){
      for(int j=0;j<n+1;j++){
	printf("%5d",array[i][j]);
      }
      cout<<endl;
    }
  }
  return 0;
}
    
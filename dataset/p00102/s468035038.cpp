#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int n;
  while(cin>>n){
    if(n==0)break;
    int a[11][11],b[10]={},c[10]={},d=0;
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
	cin>>a[i][j];
    
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++){
	b[i]+=a[i][j];
	c[i]+=a[j][i];
      }
    for(int i=0;i<n;i++)
      d+=b[i];
    for(int i=0;i<n+1;i++){
      a[i][n]=b[i];
      a[n][i]=c[i];
      a[n][n]=d;
    }
    for(int i=0;i<n+1;i++){
      for(int j=0;j<n+1;j++)
	printf("%5d",a[i][j]);
      cout<<endl;
    }
  }
  return 0;
}
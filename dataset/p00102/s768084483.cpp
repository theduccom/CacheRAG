#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int n,i,j,t,ans1=0,ans2=0,ans3=0,list[100][100]={2};
  while(1){
  cin >> n;
  if(n==0){
    break;
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      cin >> list[i][j];
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      ans1=ans1+list[i][j];
      ans2=ans2+list[j][i];
    }
    list[i][j]=ans1;
    ans3=ans3+ans1;
    ans1=0;
    list[j][i]=ans2;
    ans2=0;
  }
  list[i][j]=ans3;
  ans3=0;
  for(i=0;i<n+1;i++){
    for(j=0;j<n+1;j++){
      printf("%5d",list[i][j]);
    }
    cout << endl;
  }
  }
  return (0);
}
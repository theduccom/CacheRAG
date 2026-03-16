#include<bits/stdc++.h>
using namespace std;
bool b[50001];
int a[50001];
int main(){
  b[0]=b[1]=1;
  for(int i=2;i<50001;i++)
    for(int j=i+i;j<50001;j+=i)
      b[j]=1;
  for(int i=4;i<50001;i++){
    for(int j=2;j<=i/2;j++){
      if(!b[j]){
        if(j+j==i||(!b[i-j]))a[i]++;
      }
    }
  }
  int n;
  while(cin>>n,n)cout<<a[n]<<endl;
}
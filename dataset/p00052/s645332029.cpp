//Factrial ?
#include<bits/stdc++.h>
using namespace std;

int solve(int a){
  int ret=0;
  for(int i=5; i<=a; i*=5){
    ret+=a/i;
  }
  return ret;
}

int main(){
  int n;
  while(true){
    int n;
    cin>>n;
    if(n==0)break;
    cout<<solve(n)<<endl;
  }
  return 0;
}
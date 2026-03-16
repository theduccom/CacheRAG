#include<bits/stdc++.h>
using namespace std;

int main(){
  char num[10];
  int n;
  cin>>n;
  while(n--){
  int maxs=0;
  int mins=0;
  cin>>num;
  sort(num,num+8);
  for(int i=0,j=1,k=10000000;i<8;i++,j*=10,k/=10){
    maxs+=(num[i]-'0')*j;
    mins+=(num[i]-'0')*k;
  }
  cout<<maxs-mins<<endl;
  }
}
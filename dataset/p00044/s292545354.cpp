#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int sosuu(int i){
  if(i==1)return 0;
  else if(i==2)return 1;
  else if(i%2==0)return 0;
  for(int j=3;j*j<=i;j+=2){
    if(i%j==0)return 0;
  }
  return 1;
}

int main(){
  vector<int>::iterator p;
  vector<int> ve;
  int i=0,k,n;
  ve.clear();
  k=0;
  while(k<=50000){
    i++;
    if(sosuu(i)){
      k=i;
      ve.push_back(i);
    }
  }
  //for(int j=0;j<=100;j++)cout<<ve[i]<<endl;////////
  while(cin>>n){
    p=lower_bound(ve.begin(),ve.end(),n);
    if(*p==n)cout<<*(p-1)<<" "<<*(p+1)<<endl;
    else cout<<*(p-1)<<" "<<*p<<endl;
  }
return 0;
}
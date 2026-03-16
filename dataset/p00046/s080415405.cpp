#include<iostream>
using namespace std;
int main(){
  double d[1000]={0},max=0,min=100000;
  for(int i=0;cin>>d[i];i++){
    if(max<d[i])max=d[i];
    if(min>d[i])min=d[i];
  }
  cout<<max-min<<endl;
  return 0;
}
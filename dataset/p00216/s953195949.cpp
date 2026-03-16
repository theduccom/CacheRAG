#include<iostream>
using namespace std;
int main()
{
  int n=0,ans;
  cin >>n;
  while(n!=-1){
    ans=0;
    if(n>30){
      ans+=(n-30)*160;
      n=30;
    }
    if(n>20){
      ans+=(n-20)*140;
      n=20;
    }
    if(n>10)
      ans+=(n-10)*125;
    cout <<4280-(ans+1150)<<endl;
    cin>> n;
  }
  return 0;
}


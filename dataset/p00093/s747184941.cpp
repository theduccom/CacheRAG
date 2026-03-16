//Leap Year
#include<bits/stdc++.h>
using namespace std;

bool judge(int y){
  if(y%400==0)return true;
  if(y%100==0)return false;
  if(y%4==0)return true;
  return false;
}

int main(){
  int a, b, n=0;
  while(true){
    bool flag=true;
    cin>>a>>b;
    if(a==0&&b==0)break;
    if(n!=0)cout<<endl;
    for(int i=a; i<=b; i++){
      if(judge(i)){cout<<i<<endl; flag=false;}
    }
    if(flag)cout<<"NA"<<endl;
    n++;
  }
  return 0;
}
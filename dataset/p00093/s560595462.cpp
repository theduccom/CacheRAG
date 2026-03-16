#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,p=0;
  while(cin>>a>>b,b){
    if(p)cout<<endl;
    p++;
    int s=0;
    for(int i=a;i<=b;i++){
      if(i%4==0){
        if(i%400==0)cout<<i<<endl;
        else if(i%100==0)continue;
        else cout<<i<<endl;
        s++;
      }
    }
    if(!s)cout<<"NA"<<endl;
  }
}
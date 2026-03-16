#include<bits/stdc++.h>
using namespace std;
main(){
  int num=0,a;
  for(int i=0;i<3;i++){
    cin>>a;
    num=num<<1;
    num+=a;
    //cout<<num<<endl;
  }
  if(num==6||num==1){
    cout<<"Open"<<endl;
  }
  else{
    cout<<"Close"<<endl;
  }
}
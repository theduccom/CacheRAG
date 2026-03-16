#include<iostream>
#include<algorithm>
using namespace std;
int a[10];
int main(){
  for(int i=0;i<3;i++){
    cin>>a[i];
  }
  int i=0;
  if(a[i]==1 && a[i+1]==1){
    cout<<"Open"<<endl;
  }else{
    if(a[i+2]==1){
      cout<<"Open"<<endl;
    }else{
      cout<<"Close"<<endl;
    }
  }
  return(0);
}  


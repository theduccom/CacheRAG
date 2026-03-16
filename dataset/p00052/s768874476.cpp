#include<iostream>
using namespace std;
int main(){
  int c,n;
  for(;;){
    cin>>n;
    if(n==0)
      break;
    c=0;
    while(n){
      n/=5;
      c+=n;
    }
    cout<<c<<endl;
  }
  return 0;
}
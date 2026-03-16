#include<iostream>
using namespace std;

int main(){
  int n,s;
  while(true){
    cin>>n;
    if (!n)break;
    s = 0;
    while(n>0){
      n/=5;
      s+=n;
    }
    cout<<s<<endl;
  }
  return 0;
}
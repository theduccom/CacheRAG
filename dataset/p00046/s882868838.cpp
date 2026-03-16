#include<iostream>
using namespace std;

int main(void){
  double n,ma,mi;
  ma = -1,mi = 1000000;
  while(cin>>n){
    ma = max(ma,n);
    mi = min(mi,n);
  }
  cout<<ma-mi<<endl;
}
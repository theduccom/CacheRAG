#include<iostream>
using namespace std;
int main(){
  double h,t,y;
  int k;
  while(cin>>h){
    t=h/9.8;
    y=4.9*t*t;
    for(k=0;5*k-5<y;k++);
    cout<<k<<endl;
  }
  return 0;
}
#include<iostream>
using namespace std;
int main(){
  double v;
  while(cin>>v){
    double t,y;
    t=v/9.8;
    y=4.9*t*t;
    y=(y+5.0)/5.0;
    if(y-(int)y!=0) y+=1;
    cout<<(int)y<<endl;
  }
}
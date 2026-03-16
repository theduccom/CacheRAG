#include <iostream>
#include <cmath>
using namespace std;

int main(){
  double v,t;
  while(cin>>v){
    int N;
    t=v/9.8;
    N=floor((4.9*t*t+5)/5)+1;
    cout<<N<<endl;
  }
  return 0;
}
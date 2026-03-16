#include<iostream>
#include<cmath>
using namespace std;

int main(){
  double v;
  double h;
  int ans;
  double min;
  while(cin>>min){
    v=0;
    h=0;
    ans=1;
    for(;v<min;ans++){
      h=5*ans-5;
      v=9.8*sqrt(h/4.9);
    }
    cout<<ans-1<<"\n";
  }
  return 0;
}
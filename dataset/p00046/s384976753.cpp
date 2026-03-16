//01
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
  double h=-1,l=1<<30;
  for(double n;cin>>n;){
    h=max(h,n);
    l=min(l,n);
  }
  cout<<h-l<<endl;
  return 0;
}
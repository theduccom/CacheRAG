#include <iostream>
#include <iomanip>
using namespace std;


int main(){
  float h,l,m;
  cin>>m;
  h=l=m;
  while(cin>>m){
    if(h<m) h=m;
    else if(l>m) l=m;
  }
  cout<<fixed<<setprecision(1)<<h-l<<endl;
  return 0;
}
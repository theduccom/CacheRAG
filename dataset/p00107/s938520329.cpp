#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
  int x,y,z;
  while(true){
  cin>>x>>y>>z;
  if(!x&&!y&&!z)
    break;
  double l = sqrt(x*x+y*y+z*z-max(x,max(y,z))*max(x,max(y,z)));
  int n,r;
  for(cin>>n;n>0;n--){
    cin>>r;
    if(l<2*r)
      cout<<"OK"<<endl;
    else
      cout<<"NA"<<endl;
  }
  }
  return 0;
}
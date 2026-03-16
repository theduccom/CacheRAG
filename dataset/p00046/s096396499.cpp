#include<iostream>
using namespace std;

int main(void){
  double maxv = -1,minv=(int)1e5;
  double v;
  while(cin>>v){
    if(v>maxv)maxv = v;
    else if(v<minv)minv = v;
  }
  cout<<maxv-minv<<endl;
}
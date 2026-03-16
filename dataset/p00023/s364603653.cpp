#include<iostream>
#include<cmath>
using namespace std;

int main(){
  double xa,ya,xb,yb,ra,rb,dis;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>xa>>ya>>ra>>xb>>yb>>rb;
    dis=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
    if(dis>ra+rb) cout<<"0"<<endl;
    else if(dis<ra-rb) cout<<"2"<<endl;
    else if(dis<rb-ra) cout<<"-2"<<endl;
    else cout<<"1"<<endl;
  }
  return 0;
}
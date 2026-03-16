#include<iostream>
using namespace std;
int main(){
  int t,y,n;
  char c;
  int ty=0,h=0;
  while(cin>>t>>c>>y>>c>>n){
    if(t*t+y*y==n*n)ty++;
    if(t==y)h++;
  }
  cout<<ty<<"\n"<<h<<endl;
  return 0;
}
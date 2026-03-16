#include<iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;
int dt[10];
int main(){
  int n,m;
  while(cin>>n,n){
    rep(i,10)dt[i]=0;
    rep(i,n){
      cin>>m;
      dt[m]++;
    }
    rep(i,10){
      if(dt[i]==0)cout<<'-'<<endl;
      else{
	rep(j,dt[i])cout<<"*";
	cout<<endl;
      }
    }
  }
  return 0;
}
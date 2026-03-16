//17
#include<iostream>
#include<iomanip>
 
using namespace std;
 
int main(){
  double sum=0,na=0;
  double a=0;
  for(int t,s;(cin>>t).ignore()>>s;){
    sum+=t*s;
    a+=s;
    na++;
  }
  cout<<(int)sum<<endl<<(int)(a/na+0.5)<<endl;
  return 0;
}
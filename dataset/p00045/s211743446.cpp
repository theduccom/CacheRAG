//17
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
  int sum=0,a=0,na=0;
  for(int t,s;(cin>>t).ignore()>>s;){
    sum+=t*s;
    a+=s*2;
    na++;
  }
  int da=a/na;
  cout<<sum<<endl<<da/2+(da&1)<<endl;
  return 0;
}
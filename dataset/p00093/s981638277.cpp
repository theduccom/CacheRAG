#include <iostream>
using namespace std;
int main(){
  int a,b;
  cin >> a>>b;
  while(1){  
    bool f=0;
    if(a==0&&b==0)break;
    for(int i=a;i<=b;i++){
      if(i%400==0){cout<<i<<endl;f=1;}
      else if(i%4==0&&i%100!=0){cout<<i<<endl;f=1;}
    }
    if(f==0)cout<<"NA"<<endl; 
    if(cin>>a>>b&& a && b)cout<<endl;
  }
  return 0;
}
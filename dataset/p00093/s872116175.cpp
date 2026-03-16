#include <iostream>

using namespace std;

int main(){
  int a,b,n=0;
  while(cin>>a>>b&&a){
    bool f=true;
    for(int i=a-a%4;i<=b;i+=4){
      if(i==a-a%4){
	if(n){
	  cout<<endl;
	}
	n++;
	if(a%4) continue;
      }
      if(i%100||!(i%400)){
	cout<<i<<endl;f=false;
      }
    }
    if(f) cout<<"NA"<<endl;
  }
  return 0;
}
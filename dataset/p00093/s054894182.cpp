#include <iostream>
using namespace std;

int main(){
  int a,b;
  bool f = false;
  while(cin>>a>>b){
    if(a==0 && b==0) break;
    if(f){ cout<<endl;}
    f=true;
    bool flag = false;
    for(int i = a;i<=b;i++){
      if(i%4==0){
	if(i%100 == 0){
	  if(i%400==0){
	    cout<<i<<endl;
	    flag = true;
	  }
	  continue;
	}	
	cout<<i<<endl;
	flag = true;
      }
    }
    if(!flag)
      cout<<"NA"<<endl;
  }
  return 0;
}
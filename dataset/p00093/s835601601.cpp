#include <iostream>
using namespace std;
bool chk(int n){
  return (n % 4 == 0) - (n%100 == 0) + (n%400 ==0);
}

int main(void){
  int a,b,res = 0;
  bool first = false;
  while(cin>>a>>b,a+b){
    bool used = false;
    if(first)cout<<endl;
    first = true;

    for(int i = a ; i <= b ; i ++)
      if(chk(i)){
	cout<<i<<endl;
	used = true;
      }
    if(!used)cout<<"NA"<<endl;
  }
}
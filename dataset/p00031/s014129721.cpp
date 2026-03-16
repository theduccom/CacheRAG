#include<iostream>
using namespace std;

int main() {
  int d;

  while(cin>>d){
    int a=1;
    while(true){
      if(d==0) break;
      if(d%2==1) {
	cout<<a;
	d--;
	if(d>0) cout<<" ";
      }
      d/=2;
      a*=2;
    }
    cout<<endl;
  }
}
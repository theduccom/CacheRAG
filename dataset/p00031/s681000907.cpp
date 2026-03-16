#include<iostream>
using namespace std;

int main() {
  int d,a;

  while(cin>>d){
    a=1;
    for(;a<=d;a=a<<1) {
      if(a&d) {
	cout<<a;
	if(d/a>2) cout<<" ";
      }
    }
    cout<<endl;

    /*
    a=1;
    for(;d>0;) {
      if(d%2==1) {
	cout<<a;
	d--;
	if(d>0) cout<<" ";
      }
      d/=2;
      a*=2;
    }
    cout<<endl;
    */
  }

}
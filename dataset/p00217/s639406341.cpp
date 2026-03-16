#include<iostream>
using namespace std;

int main() {
  int n,p,d1,d2,max,pp;
  while(cin>>n, n) {
    max = 0;
    for(int i=0; i<n; ++i) {
      cin>>p>>d1>>d2;
      if(d1+d2 > max) {
	max = d1+d2;
	pp = p;
      }
    }
    cout<<pp<<" "<<max<<endl;
  }
}
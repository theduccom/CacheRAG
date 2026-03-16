#include<iostream>
using namespace std;

int main() {
  double d,ma,mi;
  cin>>d;
  ma = d,mi =d;
  while(cin>>d) {
    ma = max(ma, d);
    mi = min(mi, d);
  }
  cout<<ma-mi<<endl;
}
#include<iostream>
using namespace std;

int main() {
  int n;
  while(1) {
    cin>>n;
    if(!n) break;
    int c = 5,sum = 0;;
    while(c<=n) {
      sum += n/c;
      c *= 5;
    }
    cout<<sum<<endl;
  }
}
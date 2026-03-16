#include<iostream>
using namespace std;

int main() {
  double a;
  cout.precision(10);
  while(cin>>a) {
    double sum = a;
    for(int i=2; i<=10; ++i) {
      if(i%2==0) {
        a *= 2;
        sum += a;
      }else{
        a /= 3;
        sum += a;
      }
    }
    cout<<sum<<endl;
  }
}
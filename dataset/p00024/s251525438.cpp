#include<iostream>
using namespace std;

int main() {

  double d;
  while(cin>>d) {
    double t = d/9.8;
    double h = 4.9*t*t;

    for(int i=1; ;i++) {
      if(5*i-5>h) {
        cout<<i<<endl;
        break;
      }
    }
  }
}
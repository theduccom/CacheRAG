#include<iostream>
using namespace std;

int solve(int x) {
  int ret = 1150;
  if(x <= 10) return ret;
  if(x <= 20) {
    ret += (x-10)*125;
    return ret;
  }else if(x <= 30) {
    ret += (x-20)*140 + 1250;
    return ret;
  }else{
    ret += 1250 + 1400 + (x-30)*160;
    return ret;
  }
}

int main() {
  int i;
  while(cin>>i, (i != -1))
    cout<<4280-solve(i)<<endl;
}
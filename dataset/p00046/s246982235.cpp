#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  double mi = 100000000, ma, n;
  while(cin >> n) {
  ma = max(ma, n);
  mi = min(mi, n);
  }
  cout << ma - mi << endl;
  return 0;
}
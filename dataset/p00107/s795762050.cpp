#include <iostream>
using namespace std;

int main() {
  long long int a,b,c,n,r;
  while(cin >> a >> b >> c) {
    if((a==0)&&(b==0)&&(c==0)) break;
    cin >> n;
    for(int i=0;i<n;i++) {
      cin >> r;
      if((a*a + b*b < 4*r*r) || (b*b + c*c < 4*r*r) || (c*c + a*a < 4*r*r)) {
        cout << "OK" << endl;
      }
      else
        cout << "NA" << endl;
    }
  }
  return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;
int main() {

  int a[3];

  while(1) {
  cin >> a[0] >> a[1] >> a[2];
  if(a[0] + a[1] + a[2] == 0) break;

  sort(a,a+3);
  int n;
  cin >> n;

  int s = a[0]*a[0] + a[1]*a[1];
  for(int i=0;i<n;i++) {
    int r;
    int c;
    cin >> r;
    c = 4*r*r;
    //cout << s <<" " << c<<endl;

    if(s < c) cout <<"OK"<<endl;
    else cout << "NA"<<endl;
  }
  }

  return 0;
    
}
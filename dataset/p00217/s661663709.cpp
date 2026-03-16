#include <iostream>
using namespace std;

int main() {
  int n,p,d1,d2,top=0,num;
  while(cin >> n,n) {
    top = 0;
    for(int i=0;i<n;i++) {
      cin >> p >> d1 >> d2;
      if(d1+d2 >= top) {
        num = p;
        top = d1+d2;
      }
    }
    cout << num << " " << top << endl;
  }
}
#include <iostream>
using namespace std;
 
int main() {
  int n,i,f;
  while(cin >> n) {
      f=0;
      for (i=1; i<513; i*=2) if ((n & i) !=0) {
          if (f==1) cout << ' '; else f=1;
          cout << i ;
      }
      cout << endl;
  }
  return 0;
}
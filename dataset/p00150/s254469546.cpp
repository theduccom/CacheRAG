#include <iostream>
using namespace std;

int main() {
  bool so[10001] ={};
  so[0] = so[1] = 1;
  for(int i=2;i<=10000;i++) {
    if(so[i] == 0)
      for(int j=2;j<=10000/i;j++) so[j*i] = 1;
  }
  
  while(1) {
    int n;
    cin >> n;
    if(n == 0) break;

    for(int i=n;i>=3;i--) {
      if(so[i] == 0 && so[i-2] == 0) {
	cout << i-2 <<" "<< i << endl;
	break;
      }
    }

  }

  return 0;

}
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){

  int a[10], b[10], g, cnt;

  for(int i=0; i<10; i++){
    a[i] = pow(2, i);
  }

  fill(b, b+10, 0);
  cnt = 0;
  while(cin >> g){
    for(int i=9; i>=0 && g != 0; i--){
      if(a[i] <= g){
        b[i] = 1;
        g -= a[i];
        cnt++;
      }
    }

    for(int i=0; i<10; i++){
      if(b[i] == 1){
        cnt--;
        cout << a[i] << (cnt? " " : "");
        b[i] = 0;
      }
    }
    cout << endl;

  }

  return 0;

}
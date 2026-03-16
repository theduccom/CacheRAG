#include <iostream>
using namespace std;

int main() {

  int c = 4280;
  int a[3] = {125,140,160};
  int b = 1150;
  while(1) {

    int n;
    cin >> n;
    if(n == -1) break;

    b = 1150;
    if(n >=10 )n -= 10;
    else n = 0;
    int i =0;
    while(n >= 10){
      if(i == 3) i--;
      b += a[i]*10;
      n -= 10;
      i++;
      //    cout <<i<<" "<<n <<" "<< b<< endl;
     
    }
    // cout <<i << endl;
    if(i==3)i--;
    for(int j=0;j<n;j++) b +=a[i];
      
    cout << c - b << endl;
    
  }

  return 0;

}
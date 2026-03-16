#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
  int i,j,n,be,af;
  be = 4280;
  while(1){
    cin >> n;
    if(n == -1) break;

    af = 1150;
    if(n > 10 && n <= 20) af += (n - 10) * 125;
    else if(n > 20) af += 10 * 125;
    if(n > 20 && n <= 30) af += (n - 20) * 140;
    else if(n > 30) af += 10 * 140;
    if(n > 30) af += (n - 30) * 160;
    
    cout << be - af << endl;
    
  }
  return 0;
}
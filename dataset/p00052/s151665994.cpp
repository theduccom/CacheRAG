#include <iostream>
using namespace std;

int main(void){
  int n;
  while(true){
    cin >> n;
    if(n == 0) break;
    int sum = 0;
    while(n / 5 != 0){
      sum += n / 5;
      n = n / 5;
    }
    cout << sum << endl;
  }
  return 0;
}
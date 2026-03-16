#include <iostream>

using namespace std;

int main(){
  int a, b, cnt, sum, cntSum;
  char c;
  cnt = sum = cntSum = 0;
  while(cin >> a >> c >> b){
    sum += a*b;
    cntSum += b;
    cnt++;
  }
  cout << sum << endl << (int)(((double)cntSum / (double)cnt)+0.5) << endl;
  return 0;
}
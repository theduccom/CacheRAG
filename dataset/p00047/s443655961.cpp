#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
  string str;
  int cup[3] = {1, 0, 0};
  while(cin >> str){
    int t1 = str[0] - 'A', t2 = str[2] - 'A';
    swap(cup[t1], cup[t2]);
  }
  char ans = (cup[0] == 1) ? 'A' : (cup[1] == 1) ? 'B' : 'C';
  cout << ans << endl;
  return 0;
}
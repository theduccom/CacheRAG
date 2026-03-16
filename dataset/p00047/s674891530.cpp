#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  char s[2],tr;
  int a[3] ={1,0,0};
  while(cin >> s[0] >> tr >> s[1]){
	swap(a[s[0] -'A'],a[s[1] - 'A']);
  }
  for(int i=0;i<3;i++){
	if(a[i] == 1) cout << (char)('A' + i) << endl;
  }
  return 0;
}
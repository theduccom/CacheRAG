#include <bits/stdc++.h>
using namespace std;

int main() {
  int data[] = {1,2,4,8,16,32,64,128,256,512};
  int n;
  while ( cin >> n ) {
    vector<int> num;
    num.clear();
    for ( int i = 9; i >= 0; i-- ) {
      if ( n - data[i] >= 0 ) {
	n-= data[i];
	num.push_back(data[i]);
      }
    }
    for ( int i = num.size()-1; i >= 0; i-- ) {
      if ( i == 0 ) cout << num[i] << endl;
      else cout << num[i] << " ";
    }
  }

  return 0;
}
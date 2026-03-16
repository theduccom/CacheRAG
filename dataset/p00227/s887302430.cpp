#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, m;
  int data[1000];
  int sum;


  while(1) {
    cin >> n >> m;
    if(n == 0 && m == 0) break;
    for(int i = 0; i < n; i++) {
      cin >> data[i];
    }
    sort(data, data+n);
    sum = 0;
    int i = n-1;
    while(1) {
      for(int j = 0; j < m; j++) {
	if(i < 0) {
	  break;
	}
	if(j+1 == m) {
	} else {
	  sum += data[i];
	}
	i--;
      }
      if(i < 0) break;
    }
    cout << sum << endl;
  }
  return 0;
}
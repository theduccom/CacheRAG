#include <iostream>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
    if (n == 0) break;
    int number[n];
    bool useN[4000];
    long long int total[4000];
    for (int i = 0; i < n; i++) number[i] = 0;
    for (int i = 0; i < 4000; i++) {
      useN[i] = false;
      total[i] = 0;
    }
    
    for (int i = 0; i < n; i++) {
      int a;
      long long int b,c;
      cin >> a >> b >> c;
      number[i] = a;
      if (!useN[a-1]) useN[a-1] = true;
      total[a-1] += b*c;
    }
    
    bool NA = true;
    for (int i = 0; i < n; i++) {
      if ( useN[number[i]-1] && total[number[i]-1] >= 1000000) {
	cout << number[i] << endl;
	useN[number[i]-1] = false;
	NA = false;
      }
    }
    if (NA) cout << "NA" << endl;
  }
  return 0;
}


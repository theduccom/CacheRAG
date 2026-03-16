#include<iostream>
using namespace std;
int main() {
  int n;
  while( cin >> n, n ) {
    int num[n], one[n], two[n], sum[n];
    int maxid = 0;
    for(int i=0; i<n; i++) {
      cin >> num[i] >> one[i] >> two[i];
      sum[i] = one[i] + two[i];
      if( sum[maxid] < sum[i] ) maxid = i;
    }

    cout << num[maxid] << ' ' << sum[maxid] << endl;
  }
}
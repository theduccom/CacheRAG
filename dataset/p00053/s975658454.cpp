#include <iostream>
#include <vector>
using namespace std;

bool sosu[200000] = {false};
long long int ans[200000] = {0};

int main() {

  vector<long long int> num;

  for ( long long int i = 2; i < 200000; i++ ) {
    ans[i] = ans[i-1];
    if ( sosu[i] == false ) {
      ans[i] += i;
      num.push_back(i);
      for ( long long int j = i*2; j < 200000; j+=i ) {
	sosu[j] = true;
      }
    }
  }

  int n;

  while(true) {

    cin >> n;
    if ( n == 0 ) break;

    cout << ans[num[n-1]] << endl;

  }

  return 0;

}
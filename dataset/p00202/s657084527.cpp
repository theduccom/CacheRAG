#include<iostream>
using namespace std;
const int INF = (1<<25);

bool dp[1000001];
int price[31];
int n, x;

int checkprime(int num) {
  for(int i=2; i*i<=num; i++) {
    if( num%i == 0 ) return true;
  }
  return x == 1;
}

int main() {
  while( cin >> n >> x, n || x ) {
    for(int i=0; i<n; i++) {
      cin >> price[i];
    }

    dp[0] = true;
    for(int i=1; i<=x; i++) {
      dp[i] = false;
    }

    for(int i=0; i<n; i++) {
      for(int j=price[i]; j<=x; j++) {
	if( dp[j-price[i]] ) {
	  dp[j] = true;
	}
      }
    }

    int ans = INF;
    for(int i = x; i>0; i--) {
      if( dp[i] && !checkprime(i) ) {
	ans = i;
	break;
      }
    }

    if( ans == INF ) cout << "NA" << endl;
    else cout << ans << endl;
  }
}
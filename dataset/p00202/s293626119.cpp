#include <iostream>
#include <vector>
using namespace std;

#define MAX_P 1000001

int main(){
	bool prime[MAX_P];
	prime[0] = false;
	prime[1] = false;
	for( int i = 2; i < MAX_P; i++ ) prime[i] = true;
	for( int i = 2; i < MAX_P; i++ ){
		if( prime[i] ){
			for( int j = 2*i; j < MAX_P; j += i ){
				prime[j] = false;
			}
		}
	}
	int n, x;
	while( cin >> n >> x, n || x ){
		vector<bool> dp(x+1);
		for( int i = 0; i <= x; i++ ) dp[i] = false;
		vector<int> p(n);
		for( int i = 0; i < n; i++ ){
			cin >> p[i];
		}
		dp[0] = true;
		int max = 0;
		for( int i = 0; i < n; i++ ){
			for( int j = p[i]; j <= x; j++ ){
				if( dp[j-p[i]] ){
					dp[j] = true;
					if( prime[j] && max < j ) max = j;
				}
			}
		}
		if( max > 0 ) cout << max << endl;
		else cout << "NA" << endl;
	}
	return 0;
}
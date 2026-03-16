#include <bits/stdc++.h>
using namespace std;

vector<long long int> init() {
	vector<bool>prime( 50001, 1 );
	vector<long long int>ret;
	prime[0] = 0;
	prime[1] = 0;
	for( size_t i = 2; i <= sqrtl( 50001 ); i++ ) {
		if( prime[i] ) {
			int j = 1;
			while( i*++j < 50001 ) {
				prime[i*j] = 0;
			}
		}
	}
	for( size_t i = 0; i < 50001; i++ ) {
		if( prime[i] ) {
			ret.emplace_back( i );
		}
	}
	return ret;
}

int main() {
	auto prime = init();
	vector<long long int>ans( 50001 );
	for( size_t i = 0; i < prime.size(); i++ ) {
		for( size_t j = i; j < prime.size(); j++ ) {
			if( prime[i] + prime[j] < 50001 ) {
				ans[prime[i] + prime[j]]++;
			}
		}
	}
	long long int N;
	while( cin >> N, N ) {
		cout << ans[N] << endl;
	}
}
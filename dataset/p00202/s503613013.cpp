#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

const int MAX = 1000001;
char p[MAX] = {0};
int a[31],n,x;

void solve(int dp[MAX]){
	
	for(int i=0 ; i < x ; i++ ){
		if( dp[i] ){
			for(int j=0 ; j < n ; j++ ){
				if( i+a[j] <= x ){
					dp[ i + a[j] ] = 1;
				}
			}
		}
	}
}

int main(){
	for(int i=2 ; i < MAX ; i++ ) p[i] = 1;
	for(int i=2 ; i < sqrt(MAX)+1 ; i++ ){
		if( p[i] ){
			for(int j=i+i ; j < MAX ; j += i ){
				p[j] = 0;
			}
		}
	}

	while( cin >> n >> x , n||x ){
		for(int i=0 ; i < n ; i++ ){
			cin >> a[i];
		}

		int dp[MAX] = {1};
		solve( dp );
		int ans = 0;
		for(int i=x ; i > 0 ; i-- ){
			if( dp[i] && p[i] ){
				ans = i;
				break;
			}
		}

		if( ans > 0 )
			cout << ans << endl;
		else
			cout << "NA" << endl;
	}
}
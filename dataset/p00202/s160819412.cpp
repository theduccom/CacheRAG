#include <iostream>
using namespace std;

int n, x;
int a[30];
int dp[1000001];
int prime[1000001];

int main(){
	for(int i=0; i<1000001; i++){
		prime[i] = 1;
	}
	prime[0] = 0;
	prime[1] = 0;
	prime[2] = 1;
	for(int i=0; i<1000001; i++){
		if(prime[i]==1){
			for(int j=i+i; j<1000001; j+=i){
				prime[j] = 0;
			}
		}
	}


	for(;;){
		cin >> n >> x;
		if(n==0&&x==0) break;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}

		for(int i=0; i<=x; i++){
			dp[i] = 0;
		}
		dp[0] = 1;

		for(int i=0; i<=x; i++){
			for(int j=0; j<n; j++){
				if(i-a[j]>=0){
					if(dp[i-a[j]]==1){
						dp[i] = 1;
					}
				}
			}
		}
		int mx = 0;
		for(int i=0; i<=x; i++){
			if(dp[i]==1 && prime[i]==1) mx = i;
		}

		if(mx==0) cout << "NA" << endl;
		else cout << mx << endl;
	}

	return 0;
}
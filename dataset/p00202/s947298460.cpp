#include<iostream>
using namespace std;
#define MAX_N 1000010
bool prime[MAX_N], dp[MAX_N];
int main(){
	for(int i=0;i<=MAX_N;i++){
		prime[i] = true;
	}
	prime[0] = prime[1] = false;
	for(int i=2;i*i<MAX_N;i++){
		if(prime[i]){
			for(int j=i*2;j<=MAX_N;j+=i)prime[j] = false;
		}
	}

	int n, x, menu[30];
	while(1){
                cin >> n >> x;
                if(n==0&&x==0)break;
		for(int i=0;i<=x;i++){
			dp[i] = false;
		}

		for(int i=0;i<n;i++){
			cin >> menu[i];
		}

		int res = 0;

		dp[0] = true;
		for(int i=1;i<=x;i++){
			for(int j=0;j<n;j++){
				if(i-menu[j] >= 0 && dp[i-menu[j]]){
					dp[i] = true;
					break;
				}
			}
			if(dp[i] && prime[i]){
				res = i;
			}
		}

		if(res != 0){
			cout << res << endl;
		}else{
			cout << "NA" << endl;
		}
	}
}
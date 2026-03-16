#include<iostream>

bool prime[1000001], dp[1000001];

int main(){
	for(int i=0;i<=1000000;i++){
		prime[i] = true;
	}
	prime[0] = prime[1] = 0;
	for(int i=2;i<=1000000;i++){
		if(prime[i]){
			for(int j=i*2;j<=1000000;j+=i)prime[j] = false;
		}
	}

	int n, x, a[30];
	while(std::cin >> n >> x, n){
		for(int i=0;i<=x;i++){
			dp[i] = false;
		}

		for(int i=0;i<n;i++){
			std::cin >> a[i];
		}

		int res = 0;

		dp[0] = true;
		for(int i=1;i<=x;i++){
			for(int j=0;j<n;j++){
				if(i-a[j] >= 0 && dp[i-a[j]]){
					dp[i] = true;
					break;
				}
			}
			if(dp[i] && prime[i]){
				res = i;
			}
		}

		if(res != 0){
			std::cout << res << std::endl;
		}else{
			std::cout << "NA" << std::endl;
		}
	}
}
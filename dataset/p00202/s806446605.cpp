// 2012/11/19 Tazoe

#include <iostream>
using namespace std;

int main()
{
	bool is_prime[1000001];

	is_prime[0] = is_prime[1] = false;
	for(int i=2; i<=1000000; i++){
		is_prime[i] = true;
	}

	for(int i=2; i*i<=1000000; i++){
		if(is_prime[i]){
			for(int j=i*i; j<=1000000; j+=i){
				is_prime[j] = false;
			}
		}
	}

	while(true){
		int n, x;
		cin >> n >> x;

		if(n==0&&x==0)
			break;

		int K[30];
		for(int i=0; i<n; i++){
			cin >> K[i];
		}

		bool dp[1000001];

		dp[0] = true;
		for(int i=1; i<=x; i++){
			dp[i] = false;
		}

		for(int i=0; i<n; i++){
			for(int j=K[i]; j<=x; j++){
				if(!dp[j]&&dp[j-K[i]]){
					dp[j] = true;
				}
			}
		}

		int ans = -1;
		for(int i=x; i>=2; i--){
			if(is_prime[i]&&dp[i]){
				ans = i;
				break;
			}
		}

		if(ans!=-1){
			cout << ans << endl;
		}
		else{
			cout << "NA" << endl;
		}
	}

	return 0;
}
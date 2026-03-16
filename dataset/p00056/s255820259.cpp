#include<iostream>
#include<vector>

using namespace std;

const int max_lim = 50001;
bool prime[max_lim];
vector<int> look;

void init(){
	for(int i = 0 ; i < max_lim; i++){
		prime[i] = true;
	}
	prime[0] = prime[1] = true;
	for (int i = 2; i * i < max_lim; i++ ){
		for(int j= 2 * i; j < max_lim ; j += i){
			prime[j] = false;
		}
	}
	for(int i = 2; i < max_lim; i++)
		if(prime[i])
			look.push_back(i);
}

int main(){
	int n;
	init();
	while(cin>>n, n){
		int ans = 0;
		for(int i= 0 ; 2* look[i] <= n; i++){
			if(n - look[i] > 0 && prime[n - look[i]])
				ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
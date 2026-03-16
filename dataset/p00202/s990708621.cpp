#include <iostream>
using namespace std;

bool is_prime[1000000+1];
void prime(int n){
	for(int i=0;i<n+1;i++){
		is_prime[i] = true;
	}
	is_prime[0] = is_prime[1] = false;
	for(int i=2;i<n+1;i++){
		if(is_prime[i]==true){
			for(int j=i+i;j<n+1;j+=i){
				is_prime[j] = false;
			}
		}
	}
}

int main()
{
	int n,m;
	prime(1000000);
	while(cin >> n >> m){
		if(!n && !m)
			break;
		bool DP[1000000+1];
		for(int i=0;i<m+1;i++)
			DP[i] = false;
		DP[0] = true;
		int ryori;
		for(int i=0;i<n;i++){
			cin >> ryori;
			for(int j=0;j<m+1-ryori;j++)
				if(DP[j])
					DP[j+ryori] = true;
		}		
		
		for(int i=m;i>=0;i--){
			if(is_prime[i] && DP[i]){
				cout << i << endl;
				break;
			}
			else if(i==0){
				cout << "NA" << endl;
				break;
			}
		}
	}
	return 0;
}
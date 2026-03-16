#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define MAX 1000000
vector<bool> prime(MAX+1,true);
void init(){
	prime[0] = prime[1] = false;
	for(int i=2;i*i<=MAX;i++){
		if(prime[i])for(int j=i*i;j<=MAX;j+=i)prime[j] = false;
	}
}

bool dp[MAX+1] = {0};
int main(){
	init();
	int n,x;
	while(cin >> n >> x, n){
		rep(i,MAX+1)dp[i] = false;		
		dp[0] = true;
		rep(i,n){
			int t;
			cin >> t;
			for(int j=t;j<=MAX;j++){
				dp[j] = dp[j] | dp[j-t];
			}
		}
		while(x){
			if(prime[x] & dp[x]){
				cout << x << endl;
				goto successful;
			}
			x--;
		}
		cout << "NA" << endl;
		successful:;
	}
}
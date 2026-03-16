#include<iostream>
#include<vector>

using namespace std;

const int MAX=1000001;

void sieve(int MAX,bool prime[]){
	for(int i=0; i<=MAX; i++)	prime[i]=true;
	prime[0]=false;
	prime[1]=false;
	for(int i=2; i*i<=MAX; i++){
		if(prime[i])for(int j=i+i; j<=MAX; j+=i)prime[j]=false;
	}
}

int main(){
	bool prime[MAX+1];
	sieve(MAX,prime);
	int N,X;
	while(cin >> N >> X && N && X){
		int a[N];
		for(int i=0; i<N; i++)	cin>>a[i];
		vector<int> dp=vector<int>(X+1, 0);
		int ans=-1;
		for(int i=0; i<N; i++){
			for(int j=1; j<=X; j++){
				if(j>=a[i]){
					dp[j]=max(dp[j],dp[j-a[i]]+a[i]);
					if(prime[dp[j-a[i]]+a[i]])	ans=max(ans,dp[j-a[i]]+a[i]);
				}
			}
		}
		if(ans>0)	cout << ans << endl;
		else		cout << "NA" << endl;
	}
}
#include<iostream>
#include<vector>
#define MAX 1000010
using namespace std;
int prime[MAX];
bool is_prime[MAX];
void prime_make(int n){
	int p=0;
	for(int i=0;i<=n;i++)
	is_prime[i]=true;
	is_prime[0]=is_prime[1]=false;
	for(int i=2;i<=n;i++){
		if(is_prime[i]){
			prime[p++]=i;
			for(int j=i*2;j<=n;j+=i)
			is_prime[j]=false;
		}
	}
}
int main(){
	int n,m;
	prime_make(MAX);
	while(cin>>n>>m,n||m){
		bool dp[MAX];
		int p[40];
		vector<int> box;
		for(int i=0;i<=m;i++)
		dp[i]=0;
		dp[0]=1;
		for(int i=0;i<n;i++)
			cin>>p[i];
		for(int i=0;i<=m;i++){
			for(int j=0;j<n;j++){
				if(i-p[j]>=0&&dp[i-p[j]]){
					//cout<<i<<endl;
					dp[i]=1;
					box.push_back(i);
					break;
				}
			}
		}
		int ans=-1;
		for(int i=box.size()-1;i>=0;i--){
			int j;
			for(j=0;prime[j]<box[i];j++){
				if(box[i]%prime[j]==0){
			//		cout<<box[i]<<endl;
					break;
				}
			}
			if(prime[j]>=box[i]){
				ans=box[i];
				break;
			}
		}
		if(ans==-1)
		cout<<"NA"<<endl;
		else
		cout<<ans<<endl;
	}
	return 0;
}
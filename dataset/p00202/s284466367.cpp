#include <bits/stdc++.h>
using namespace std;
#define MP make_pair
#define PB push_back
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define REP(i,n) for (int i=0;i<(n);i++)
int main() {
	bool prime[1000001];
	for(int i=0;i<=1000000;i++)prime[i]=true;
	prime[0]=prime[1]=false;
	for(int i=2;i<=1000000;i++){
		if(prime[i]){
			for(int j=i*2;j<=1000000;j+=i)prime[j]=false;
		}
	}
	int n,x;
	while(cin>>n>>x&&n&&x){
		bool data[2000001];
		memset(data,false,sizeof(data));
		data[0]=true;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			for(int i=0;i<=x;i++){
				if(data[i])data[i+a]=true;
			}
		}
		int ans=-1;
		for(int i=x;i>=0;i--){
			if(data[i]&&prime[i]){
				ans=i;
				break;
			}
		}
		if(ans==-1)cout<<"NA"<<endl;
		else cout<<ans<<endl;
	}
		
}
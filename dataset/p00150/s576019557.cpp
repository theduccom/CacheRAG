#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;
int main(){
	bool prime[10001];
	int n;
	rep(i,10001)prime[i]=true;;
	prime[0]=prime[1]=false;
	for(int i=2;i<=10000;i++)if(prime[i])for(int j=2*i;j<=10000;j+=i)prime[j]=false;
	while(cin>>n){
		for(int i=n;i>=2;i--){
			if(prime[i]&&prime[i-2]){
				cout<<i-2<<" "<<i<<endl;
				break;
			}
		}
	}
}
#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
#define rer(i,l,n) for(int i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int prime[51000]; //i盤目の素数
bool is_prime[51001]; //is_prime[i]がtrueならiは素数

void sieve(int n){ //n以下の素数を返す
	int p=0;
	for(int i=0;i<=n;i++) is_prime[i]=true;
	is_prime[0]=is_prime[1]=false;
	for(int i=2;i<=n;i++){
		if(is_prime[i]){
			prime[p++]=i;
			for(int j=2*i;j<=n;j+=i) is_prime[j]=false;
		}
	}
}

int main(){
	sieve(51000);
	int n;
	while(cin>>n){
		int pre,after;
		rer(i,1,51000){
			if(i<n && is_prime[i]) pre=i;
			if(i>n && is_prime[i]){
				after=i; break;
			}
		}
		o(pre<<" "<<after);
	}
}
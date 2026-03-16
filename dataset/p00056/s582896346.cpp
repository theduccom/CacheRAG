#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include<map>
#include<set>
#include<complex>
#include<stack>
#include<cmath>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)

const int PS = 50001;
int prime[PS];
int set_prime(){
	rep(i,PS)prime[i]=1;
	prime[0]=prime[1]=0;
	rep(i,PS){
		if(prime[i]==0)continue;
		for(int j=i*2;j<PS;j+=i)prime[j]=0;
	}
}


int main(){
	set_prime();
	vector<int> s;
	rep(i,PS)if(prime[i]==1)s.push_back(i);
	
	int n;
	for(;cin>>n;){
		if(n==0)break;
		
		int sum = 0;
		rep(i,s.size()){
			if(n-s[i]>=0 && s[i]*2<=n && prime[n-s[i]]==1){
				sum++;
			}
		}
		int sum2 = 0;
		for(int i=2;i*2<=n;i++){
			if(prime[i]&&prime[n-i])sum2++;
		}
		//if(sum!=sum2)printf("%d  (%d-%d)\n",n,sum,sum2);
		printf("%d\n",sum2);
	}
}
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<string>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<cmath>
#include<queue>
#include<cstring>
#include<stack>
#include<functional>
using namespace std;

int main(){
	bool prime[10001] = {}; prime[0] = prime[1] = true;
	for(int i=2;i<=10000;i++){
		if(prime[i]) continue;
		for(int j=2;i*j<=10000;j++){
			prime[i*j] = true;
		}
	}
	int N;
	while(cin>>N,N){
		int ans = 0;
		for(int i=2;i<=N;i++){
			if(!prime[i] && !prime[i-2]) ans = max(ans,i);
		}
		printf("%d %d\n",ans-2,ans);
	}
	return 0;
}
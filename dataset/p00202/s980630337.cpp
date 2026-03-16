#include <stdio.h>
#include <map>

using namespace std;


int *ms;
int n, m;

bool *dp;
bool *data;

bool search(int m){
	if(m == 0) return true;
	else if(m < 0) return false;
	else if(dp[m]) return data[m];

	for(int i=0;i<n;i++){
		if(m%ms[i] == 0){
			return dp[m] = data[m] = true;
		}else if(search(m-ms[i])){
			return dp[m] = data[m] = true;
		}
	}
	
	dp[m] = true;
	return data[m]=false;
}

int isprime(int p){
	if(p%2==0) return 0;
	for(int i=3;i*i<p;i++){
		if(p%i==0) return 0;
	}
	return 1;
}

int main(){
	while(1){
		scanf("%d%d", &n,&m);
		
		if(n==0) break;
		
		int i;
		dp = new bool[m+1];
		data = new bool[m+1];
		for(i=0;i<=m;i++) dp[i] = false;
		
		ms = new int[n];
		for(i=0;i<n;i++) scanf("%d", ms+i);
		
		int flag = 1;
		for(i=m;i>=0;i--){
			if(search(i) && isprime(i)){
				printf("%d\n", i);
				flag = 0;
				break;
			}
		}
		if(flag) puts("NA");
		
		delete dp;
		delete data;
		delete ms;
	}
}
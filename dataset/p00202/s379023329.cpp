#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

int dp[1000001];
int kind[31];


const int MAX_SIZE = 10000;
const int MAX_PRIME = 1000000;


int prime[MAX_PRIME+1];
bool isPrime[MAX_PRIME+1];
int p;

void erats(){
	// primeXgðú»
	fill(isPrime,isPrime+MAX_PRIME,true);
	p = 0;
	isPrime[0] = isPrime[1] = false;

	for(int i = 2; i <= MAX_PRIME; i++){
		if(isPrime[i]){
			prime[p++] = i;
		}
		else
			continue;

		// Óé¢É©¯é
		for(int j = 2*i; j <= MAX_PRIME; j+=i){
			isPrime[j] = false;
		}
	}
}


int main(){

	int n;
	int x;
	erats();
	while(cin>>n>>x&&!(n==0&&x==0)){
		for(int i = 0; i < n; i++){
			cin>>kind[i];
		}
		// eàzÌ¥¢ûª½íÞ é©ðßé
		fill(dp,dp+1000001,0);
		dp[0]=1;
		int maxCost=-1;

		for(int j = 0; j < n; j++){
			for(int i = kind[j]; i <= x; i++){
				dp[i]+=dp[i-kind[j]];
			}
		}

		//for(int i = 1; i <= x; i++){
		//	dp[i]=0;
		//	for(int j = 0; j < n; j++){
		//		if(i-kind[j]>=0){
		//			dp[i]+=dp[i-kind[j]];
		//		}
		//	}
		//	if(dp[i]>=1&&(isPrime[i])){
		//		maxCost=max(i,maxCost);
		//	}
		//}
		for(int i = 0; i <= x; i++){
			if(dp[i]&&isPrime[i])
				maxCost=i;
		}


		if(maxCost==-1)
			cout<<"NA"<<endl;
		else
			cout<<maxCost<<endl;
	}

	return 0;
}
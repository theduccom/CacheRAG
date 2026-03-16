#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//vector<int> prime;
int prime[50001];
int psize;
bool isPrime[50001];

void erats(){
	fill(isPrime,isPrime+50001,true);
	isPrime[0]=false;
	isPrime[1]=false;
	for(int i = 2; i < 50001; i++){
		if(isPrime[i]){
//			prime.push_back(i);
			prime[psize]=i;
			psize++;
			for(int j = i*2; j < 50001; j+=i){
				isPrime[j]=false;
			}
		}
	}
}

int main(){
	psize=0;
	erats();
	int n;
	while(cin>>n&&n!=0){
		int cnt=0;
		for(int i = 2; i<=n/2; i++){
			if(isPrime[i]&&isPrime[n-i])
				cnt++;
		}

		//for(int i = 0; i < psize; i++){
		//	if(prime[i]+prime[i]>n)
		//		break;
		//	for(int j = i; j < psize; j++){
		//		int sum=prime[i]+prime[j];
		//		if(sum>n)
		//			break;
		//		if(sum==n)
		//			cnt++;
		//	}
		//}
		cout<<cnt<<endl;
	}
	
	return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> prime;
bool isPrime[1000001];

void erats(){
	fill(isPrime,isPrime+1000001,true);
	isPrime[0]=false;
	isPrime[1]=false;
	for(int i = 2; i < 1000000; i++){
		if(isPrime[i]){
			prime.push_back(i);
			for(int j = i*2; j < 1000000; j+=i){
				isPrime[j]=false;
			}
		}
	}
}

int main(){

	erats();
	int n;
	while(cin>>n&&n!=0){
		long long sum=0;
		for(int i = 0; i < n; i++){
			sum+=prime[i];
		}
		cout<<sum<<endl;
	}

	return 0;
}
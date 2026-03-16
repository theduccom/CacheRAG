#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> primes;
bool isPrime[60000];

void erats(){
	fill(isPrime,isPrime+60000,true);
	isPrime[0]=false;
	isPrime[1]=false;
	for(int i = 2; i < 60000; i++){
		if(isPrime[i]){
			primes.push_back(i);
			for(int j = 2*i; j < 60000; j+=i){
				isPrime[j]=false;
			}
		}
	}
}


int main(){

	int n;
	erats();
	while(cin>>n&&n!=0){
		for(int j = n-1; ; j--){
			if(isPrime[j]){
				cout<<j<<" "<<flush;
				break;
			}
		}
		for(int j = n+1; ;j++){
			if(isPrime[j]){
				cout<<j<<endl;
				break;
			}
		}
	}

	return 0;
}
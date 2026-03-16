#include <iostream>
#include <algorithm>
using namespace std;

bool is_prime[10001];
 
void sieve(){
	fill(is_prime,is_prime+10001,true);
	is_prime[0]=is_prime[1]=false;
	for(int i=2; i<=10000; ++i){
		if(is_prime[i]){
			for(int j=2; i*j<=10000; ++j){
				is_prime[i*j]=false;
			}
		}
	}
}

int main(){
	sieve();
	int N;
	while(cin >> N&&N){
		for(int i=N; i>=2; --i){
			//cout << i << endl;
			if(is_prime[i]&&is_prime[i-2]){
				cout << i-2 << ' ' << i << endl;
				break;
			}
		}
	}
	return 0;
}
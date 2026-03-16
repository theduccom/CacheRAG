#include<iostream>

using namespace std;

const int MAX=10000;
bool prime[MAX];
void make_prime(){
	for(int i = 0 ; i < MAX ; i ++){
		prime[i] = true;
	}
	
	prime[0] = false;
	prime[1] = false;
	
	for(int i = 2 ; i <= MAX ; i ++){
		if(prime[i]){
			for(int j = i+i ; j <= MAX ; j += i){
				prime[j] = false;
			}
		}
	}
}

int main(void){
	make_prime();
	int n;
	while(cin>>n,n){
		for(int i = n ; 2 <= i ; i --){
			if(prime[i] && prime[i-2]){
				cout<<i-2<<" "<<i<<endl;
				break;
			}
		}
	}
}
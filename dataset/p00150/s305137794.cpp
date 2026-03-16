#include <iostream>
using namespace std;

int pri[10000+1];
bool is_prime[10000+1];
int prime(int n){
	int p=0;
	for(int i=0;i<n+1;i++){
		is_prime[i] = true;
	}
	is_prime[0] = is_prime[1] = false;
	for(int i=2;i<n+1;i++){
		if(is_prime[i]==true){
			pri[p++] = i;
			for(int j=i+i;j<n+1;j+=i){
				is_prime[j] = false;
			}
		}
	}
	return p;
}

int main()
{
	int n;
	while(cin >> n){
		if(n==0)
			break;
		int p = prime(n);
		for(int i=p-1;i>=0;i--){
			if(pri[i] == pri[i-1]+2){
				cout << pri[i-1] << " " << pri[i] << endl;
				break;
			}
		}
	}	
	return 0;
}
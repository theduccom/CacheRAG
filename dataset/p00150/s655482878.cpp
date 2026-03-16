#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

bool isprime(int n){
	if(n<2)return false;
	for(int i=2;i*i<=n;i++) if( n % i == 0)return false;
	return true;
}
int main(){
	int n;
	while(cin >> n , n){
		while(n){
			if(isprime(n) & isprime(n-2)){
				cout << n-2 << " " << n << endl;
				break;
				}
			n--;
		}
	}
}
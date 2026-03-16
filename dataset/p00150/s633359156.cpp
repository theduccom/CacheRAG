#include <iostream>
using namespace std;

int isprime(int n);

int main()
{
	int i,n,ans;

	while(cin >> n){
		if(!n) break;
		for(i=n; i-2>2; i--){
			if(isprime(i) && isprime(i-2)){
				ans=i;
				break;
			}
		}

		cout << ans-2 << " " << ans << "\n";
	}

	return 0;
}

int isprime(int n)
{
	for(int i=2; i*i<=n; i++)
		if(n%i==0) return 0;
	return 1;
}
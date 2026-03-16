// 2012/09/20 Tazoe

#include <iostream>
using namespace std;

int main()
{
	bool is_prime[10001];
	is_prime[0] = is_prime[1] = false;
	for(int i=2; i<=10000; i++)
		is_prime[i] = true;

	for(int i=2; i*i<=10000; i++)
		if(is_prime[i])
			for(int j=i+i; j<=10000; j+=i)
				is_prime[j] = false;

	while(true){
		int n;
		cin >> n;

		if(n==0)
			break;

		for(int i=n; i>=5; i--){
			if(is_prime[i]&&is_prime[i-2]){
				cout << i-2 << ' ' << i << '\n';
				break;
			}
		}
	}

	return 0;
}
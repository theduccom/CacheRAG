// 2011/01/31 Tazoe

#include <iostream>
using namespace std;

void eratos(bool prime[], int n)
{
	if(n>=1)
		prime[0] = false;
	if(n>=2)
		prime[1] = false;

	for(int i=2; i<n; i++)
		prime[i] = true;

	for(int i=2; i<n; i++){
		if(!prime[i])
			continue;
		for(int j=i+i; j<n; j+=i)
			prime[j] = false;
		if(n<i*i)
			return;
	}
}

int main()
{
	bool prime[10001];
	eratos(prime, 10001);

	while(true){
		int n;
		cin >> n;
		if(n==0)
			break;

		for(int i=n; i>=5; i--)
			if(prime[i]&&prime[i-2]){
				cout << i-2 << ' ' << i << endl;
				break;
			}
	}

	return 0;
}
#include <iostream>
using namespace std;

int main() {
	bool is_prime[1000000];

	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i < 1000000; i++) {
		is_prime[i] = true;
	}

	for (int i = 2; i*i < 1000000; i++) {
		if (is_prime[i]) {
			for (int j = i*i; j < 1000000; j += i) {
				is_prime[j] = false;
			}
		}
	}

	int n_prime[1000000];

	while (true) {
		int n;
		cin >> n;

		if (cin.eof())
			break;
		if(n==0)
			break;

		int c=0;

		for(int i=0;i<=n/2;i++){
			if(is_prime[i]&&is_prime[n-i])
				c++;
		}

		cout << c << endl;
		
	}
	return 0;

}
#include <iostream>

using namespace std;

const int MAX = 50000;

void eratosthenes(bool* p)
{
	for (int i=0; i<=MAX; i++) p[i] = true;
	p[1] = false;
	for (int i=2; i<=MAX; i++) {
		if (!p[i]) continue;
		for (int d=2; i*d<=MAX; d++) p[i*d] = false;
	}
}

int main()
{
	int n;
	
	bool *is_prime = new bool[MAX+1];
	if (is_prime == NULL) return 1;
	eratosthenes(is_prime);
	
	while (true) {
		cin >> n;
		if (n==0) break;
		
		int count = 0;
		for (int i=2; i<=n/2; i++) {
			if (is_prime[i] && is_prime[n-i]) count++;
		}
		
		cout << count << endl;
	}
	
	delete[] is_prime;
	
	return 0;
}
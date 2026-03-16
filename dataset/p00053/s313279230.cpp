#include <iostream>

using namespace std;

const int MAX = 105000;

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
	
	bool *p = new bool[MAX+1];
	if (p == NULL) return 1;
	eratosthenes(p);
	/*
	int max_prime = 0;
	int max_prime_pos = 0;
	for (int i=2; i<=MAX; i++) {
		if (p[i]) { max_prime = i; max_prime_pos++; }
	}
	cout << max_prime_pos << " : " << max_prime << endl;
	*/
	
	while (true) {
		cin >> n;
		if (n==0) break;
		
		int sum = 0;
		int prime_count = 0;
		for (int i=2; i<=MAX && prime_count < n; i++) {
			if (p[i]) { sum += i; prime_count++; }
		}
		
		cout << sum << endl;
	}
	
	delete[] p;
		
	return 0;
}
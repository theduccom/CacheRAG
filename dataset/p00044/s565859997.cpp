#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

#define MAX 50022

int main(void)
{
	bool p[MAX];
	vector <int> prime;
	int i, j;
	
	for (i = 0; i < MAX; i++){
		p[i] = true;
		if (i % 2 == 0) p[i] = false;
	}
	prime.push_back(2);
	for (i = 3; i < MAX; i += 2){
		if (p[i]){
			prime.push_back(i);
			for (j = 1; i * j < MAX; j++){
				p[i * j] = false;
			}
		}
	}
	/*
	for (i = 0; i < prime.size(); i++){
		printf("%d ", prime[i]);
	}*/
	
	int n;
	while (cin >> n){
		if (n == EOF) return 0;
		int a, b;
		for (i = 0; i < prime.size(); i++){
			if (prime[i] < n) a = prime[i];
			if (n < prime[i]) {
				b = prime[i];
				break;
			}
		}
		printf("%d %d\n", a, b);
	}
	
	return 0;
}
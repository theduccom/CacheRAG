#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
	if (n % 2 == 0) return false;
	for (int i = 3; i < n; i += 2){
		if (n % i == 0) return false;
	}
	return true;
}

int main(void)
{
	int n;
	while (scanf("%d", &n), n){
		
		for (int i = n; 5 <= i; i--){
			// cout << i << endl;
			if (isPrime(i) && isPrime(i-2)){
				cout << i-2 << " " << i << endl;
				break;
			}
		}
		
	}
	
	return 0;
}
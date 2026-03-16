#include <iostream>
#include <cmath>

bool isPrime(int n)
{
	int ub = (int)std::sqrt((float)n);
	for (int i=2; i<=ub; i++) {
		if (n%i == 0) return false;
	}
	return true;
}

int main()
{
	int n;
	while (std::cin >> n) {
		for (int p=n; p>=2; p--) {
			if (isPrime(p) && isPrime(p-2)) { std::cout << p-2 << " " << p << std::endl; break; }
		}
	}
	return 0;
}


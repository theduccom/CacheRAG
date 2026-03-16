#include <cstdio>

using namespace std;

const int MAX_SIEVE = 60001;

bool sieve[MAX_SIEVE] = {true, true};

int main()
{
	for (int i = 2; i * i < MAX_SIEVE; i++){
		if (sieve[i]) continue;
		for (int j = i * i; j < MAX_SIEVE; j += i) sieve[j] = true;
	}
	int n;
	while (~scanf("%d", &n)){
		int mini, maxi;
		mini = maxi = n;
		while (sieve[--mini]);
		while (sieve[++maxi]);
		printf("%d %d\n", mini, maxi);
	}
	return 0;
}
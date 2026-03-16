#include <iostream>
#include <string>
using namespace std;

#define NUM 131072
#define LOOTNUM 363

int main()
{
	bool prime[NUM];
	unsigned num;

	prime[1] = false;
	prime[2] = true;
	for(long i = 3; i < NUM; i += 2) {
		prime[i] = true;
	}

	for(long i = 3; i <= LOOTNUM; i += 2) {
		if(prime[i] == true)
			for(long j = 2 * i; j < NUM; j += i)
				prime[j] = false;
	}

	while(1) {
		cin >> num;

		if(num == 0) break;
		else if(num == 1) {cout << 2 << endl;}
			else {
			unsigned long sum = 2;
			long I = 3;
			num--;
	
			while(num) {
				if(prime[I] == true) {
					sum += I;
					num--;
				}
				I += 2;
			}
			cout << sum << endl;
		}
	}

	return 0;
}
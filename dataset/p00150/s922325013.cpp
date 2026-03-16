#include <iostream>
#include <cstring>

using namespace std;

bool isPrime[10001];

void setPrime( bool *p, int size )
{
	memset(p, true, size);
	p[0] = p[1] = false;

	for(int i=2; i < size; ++i) {
		if(!p[i]) continue;
		for(int j=i+i; j < size; j+=i) {
			p[j] = false;
		}
	}
}

int main( void )
{
	setPrime(isPrime, 10001);
	int n;
	while(cin >> n, n) {
		bool hit = true;
		for(int i=n-2; i > 0 && hit; --i) {
			if(isPrime[i]) {
				if(isPrime[i+2]) {
					cout << i << ' ' << i+2 << endl;
					hit = false;
				}
			}
		}
	}
	return 0;
}
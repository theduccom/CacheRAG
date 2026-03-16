#include <iostream>
#include <cstring>	// require memset 

using namespace std;

const int N = 50000;
bool prime[N+1];

void make_prime (void)
{
	memset (prime, true , sizeof(prime ) );

	prime[0] = false;
	prime[1] = false;

	for (int i = 2; i*i <= N; ++i ) {
		if (prime[i] ) {
			for (int j = i*i; j <= N; j += i ) {
				prime[j] = false;
			} // end for
		} // end if
	} // end for
}

int main()
{
	make_prime();

	int n;
	while (cin >> n && n ) {
		int res = 0;

		for (int i = 2; i <= n/2; ++i ) {
			if (prime[i] && prime[n-i] ){
				++res;
			} // end for
		} // end for
		cout << res << endl;
	} // end loop
		
	return 0;
}
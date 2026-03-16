#include <iostream>
#include <cstring>	// require memset 

using namespace std;

const int N = 50000;
bool prime[N+1];

void make_prime (void)
{
	int i,j;
	memset (prime, true , sizeof(prime) );

	prime[0] = false;
	prime[1] = false;

	for (j = 0; j <= N; ++j ) {
		if (prime[j]){
			int p = j;
			for (i = 2*p; i <= N; i += p ) {
				if (prime[i] ){
					prime[i] = false;
				} // end if
			} // end for
		} // end if	
	} // end for
}

int main()
{
	int n;
	make_prime();

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
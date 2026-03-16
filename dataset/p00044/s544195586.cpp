#include <iostream>

using namespace std;

void eratosthenes(bool p[], int n)
{
	for (int i=0; i<=2*n; i++) p[i] = true;
	p[1] = false;
	for (int i=2; i<=n; i++) {
		if (!p[i]) continue;
		for (int d=2; i*d<=2*n; d++) p[i*d] = false;
	}
}

int main()
{
	int n;
	bool p[100001];
	
	while (cin >> n) {
		eratosthenes(p, n);
		for (int i=n-1; i>0; i--) {
			if (p[i]) { cout << i << " "; break; }
		}
		for (int i=n+1; i<2*n; i++) {
			if (p[i]) { cout << i << endl; break; }
		}
	}
			
	return 0;
}
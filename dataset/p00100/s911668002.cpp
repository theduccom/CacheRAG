#include "iostream"
using namespace std;

int LinearSearch(int x, int S[], int N) {
	S[N] = x;
	for (int i = 0; ; i++) {
		if (S[i] == x)
			if (i < N) {
				return 0;
			}
			else
				return 1;
	}
}

int main()
{
	while (1) {
		int h[4000] = { 0 };
		int m[4000] = { 0 };
		int a = 0;
		int n;
		cin >> n;
		if (n == 0)
			break;
		int number, nedan, amount;
		for (int i = 0; i < n; i++) {
			cin >> number >> nedan >> amount;
			h[number] += nedan*amount;
			if (h[number] >= 1000000) {
				if (LinearSearch(number, m, a)) {
					m[a] = number;
					a++;
				}
			}
		}
		if (a == 0)
			cout << "NA"<<endl;
		for (int i = 0; i < a; i++) {
			cout << m[i] << endl;
		}
	}
		return 0;
}
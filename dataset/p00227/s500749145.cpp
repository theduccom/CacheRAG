
#include"iostream"
using namespace std;
int main() {
	while (1) {
		int n, m,p[10000],sum=0;
		cin >> n >> m;
		
		if (n == 0 && m == 0)break;

		for (int i = 1; i <= n; i++) {
			cin >> p[i];
	}

		for (int j = 0; j < n - 1; j++) {
			for (int i = 1; i < n ; i++) {
				if (p[i] < p[i + 1]) {
					swap(p[i], p[i + 1]);

				}
			}
		}
		for (int i = 1; i <= n; i++) {
					if (i%m != 0) {
						sum += p[i];
					}

			}
		
		cout << sum << endl;
	}
		
	return 0;
}



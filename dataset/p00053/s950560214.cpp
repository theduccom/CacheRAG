#include <iostream>

using namespace std;

int main()
{
	int num[104730] = {0}, Pnum[10000], n, ans;

	int k = 0;
	for (int i = 2; i < 104730; i++) {
		if (!(num[i])) {
			Pnum[k] = i;
			k++;
			for (int j = i + i; j < 104730; j+=i) {
				num[j] = 1;
			}
		}
	}
	
	while (cin >> n) {
		if (n == 0)	break;

		ans = 0;
		for (int i = 0; i < n; i++) {
			ans += Pnum[i];
		}

		cout << ans << endl;
	}

	return 0;
}
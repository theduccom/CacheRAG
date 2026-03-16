#include <iostream>

using namespace std;

int main()
{
	int Pnum[50001] = {1,1,0}, n, ans;

	for (int i = 2; i < 50001; i++) {
		if (!(Pnum[i])) {
			for (int j = i+i; j < 50001; j+=i) {
				Pnum[j] = 1;
			}
		}
	}

	while (1) {
		cin >> n;
		if (n == 0)	break;

		ans = 0;
		for (int i = 2; i < n; i++) {
			if (!(Pnum[i]) && !(Pnum[n - i])){
				ans++;

				if (i == n - i) {
					ans++;
				}
			}
		}

		cout << ans/2 << endl;
	}

	return 0;
}

#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#include<queue>
#include<vector>
#include<functional>
#include<cmath>
#include<map>
#include<stack>
#include<set>
#include<numeric>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pl;


int main()
{
	int n;
	while (cin >> n, n) {
		int m[10] = {0};
		for (int i = 0; i < n; i++){
			int c; cin >> c;
			m[c]++;
		}
		for (int i = 0; i < 10; i++) {
			if (m[i] != 0) {
				for (int j = 0; j < m[i]; j++) {
					cout << "*";
				}
				cout << endl;
			}
			else
				cout << '-' << endl;
		}
	}
	return 0;
}
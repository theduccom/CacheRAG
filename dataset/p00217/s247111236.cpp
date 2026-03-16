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
		vector<pl> A(n);

		for (int i = 0; i < n; i++) {
			ll d1, d2;
			cin >> A[i].second >> d1 >> d2;
			A[i].first = d1 + d2;
		}
		sort(A.begin(),A.end(), greater<pl>());
		printf("%lld %lld\n", A[0].second, A[0].first);

	}
	return 0;
}
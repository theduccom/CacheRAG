#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repr(i,a,n) for(int i=a;i>=n;i--)
#define INF 999999999
#define INF_M 2147483647
#define pb(a) push_back(a)
using namespace std;
typedef pair<int, int> pii;
typedef long long int ll;

vector<int> erat(int n) {
    vector<int> primes(n);
    for (int i = 2; i < n; ++i) primes[i] = i;
    for (int i = 2; i*i < n; ++i)
        if (primes[i])
            for (int j = i*i; j < n; j+=i) primes[j] = 0;
    // ?´???°?????????vector???????´?????????´????????\?????????????????? (0 ??§??????????´??????¨??????)
    primes.erase(remove(primes.begin(), primes.end(), 0), primes.end());
    return primes;
}

int main() {
	vector<int> v = erat(50000);
	int n;
	while(cin >> n) {
		if(n == 0) break;
		int ans = 0;
		rep(i,0,v.size()) {
			if(v[i] > n / 2) break;
			else if((n-v[i]) != 0 && *lower_bound(v.begin(), v.end(), n-v[i]) == n-v[i]) ans++;
		}
		cout << ans << endl;
	}
}
#include <bits/stdc++.h>  
 
using namespace std;
 
#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define repr(i, j) for(int i = j; i >= 0; --i)
#define INF (1 << 30)
#define MOD 1e9 + 7
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;

int main() {
	int N;
	scanf("%d", &N);
	rep(i, N) {
		string a, b;
		string ans;
		cin >> a >> b;
		int a_tmp, b_tmp;
		int k = (a.size() > b.size()) ? a.size() : b.size();
		int tmp = max(a.size(), b.size()) - min(a.size(), b.size());
		rep(j, tmp) (a.size() > b.size()) ? b.insert(0, "0") : a.insert(0, "0");
		int keta = 0;
		repr(j, k - 1) {
			a_tmp = a[j] - 48; b_tmp = b[j] - 48;
			int sum = a_tmp + b_tmp + keta;
			if(sum < 10) {
				keta = 0;
				stringstream ss;
				ss << sum;
				ans.insert(0, ss.str());
			}
			else {
				keta = 1;
				sum = sum - 10;
				stringstream ss;
				ss << sum;
				ans.insert(0, ss.str());
			}
		}
		if(keta == 1) ans.insert(0, "1");
		if(ans.size() > 80) printf("overflow\n");
		else cout << ans << endl;
	}
	return 0;
}
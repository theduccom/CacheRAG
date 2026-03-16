#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repr(i,a,n) for(int i=a;i>=n;i--)
#define INF 999999999
#define INF_M 2147483647
#define pb(a) push_back(a)
using namespace std;
typedef pair<int, int> pii;
typedef long long int ll;
 
int main() {
	int n; cin >> n;
	rep(i,0,n) {
		int a[8];
		rep(j,0,8) scanf("%1d",&a[j]);

		int big = 0; int small = 0;
		sort(a, a+8);
		rep(j,0,8) {
			small += a[j] * pow(10,7-j);
			big += a[7-j] * pow(10,7-j);
		}

		cout << big - small << endl;
	}
    return 0;
}
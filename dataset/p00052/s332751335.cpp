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
 	int n;
 	while(cin >> n) {
 		if(n == 0) break;
 		int ret = 0;
 		while(n/=5) ret += n;
 		cout << ret << endl;
 	}
    return 0;
}
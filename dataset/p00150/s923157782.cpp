#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <cstring>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <iostream>

#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,m,n) for (int i=m;i<(int)(n);i++)

const int INF = 10000000;
using namespace std;
typedef long long  ll;
const int MAX = 10000;
/** Problem0150 : Twin Prime **/
int main()
{
	int n;
	bool prime[MAX];
	int before=0, ans1=0, ans2, max;
	
	for (int i=0; i<MAX; i++)
		prime[i] = true;
	
	prime[0] = false; prime[1] = false;
	
	for (int i=2; i<MAX; i++) {
		if (prime[i]) {
			for (int j=2; i*j<MAX; j++) {
				prime[i*j] = false;
			}
		}
	}
	
	while (cin>>n, n!=0) {
		before = 1; max=0;
		REP(i, 3, n+1) {
			if (prime[i]) {
				if (i-before==2) {
					if (i>max) {
						max = i;
						ans1 = before;
						ans2 = i;
					}
				}
				before = i;
			}
		}
		cout << ans1 << " " << ans2 << endl;
	}
	return 0;
}
#include <stdio.h>
#include <cctype>
#include <limits.h>
#include <math.h>
#include <complex>
#include <bitset>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cstring>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <iostream>

#define VARIABLE(x) cerr << #x << "=" << x << endl
#define BINARY(x) static_cast<bitset<16> >(x);
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,m,n) for (int i=m;i<(int)(n);i++)
#define if_range(x, y, w, h) if (0<=(int)(x) && (int)(x)<(int)(w) && 0<=(int)(y) && (int)(y)<(int)(h))

const int INF = 1e9;
const double EPS = 1e-8;
const double PI = 3.14159;
int dx[4]={0, 1, 0, -1}, dy[4]={-1, 0, 1, 0};
using namespace std;
typedef long long ll;
//typedef pair<int, int> P;
/* struct P {
	int x, y, n;
	P(int n, int x, int y):n(n), x(x), y(y){}
	P(){}
}; */

/** Problem0202 : At Boss's Expense **/
const int MAX = 1000010;
int main()
{
	int N, P;
	bool isPrime[MAX];
	memset(isPrime, 1, sizeof(isPrime));
	isPrime[0]=false, isPrime[1]=false;
	for (int i=2; i<MAX; i++) {
		if (isPrime[i]) {
			for (int j=2; i*j<MAX; j++) {
				isPrime[i*j]=false;
			}
		}
	}
	
	while (cin>>N>>P, N||P) {
		vector<int> price(N);
		bool can[MAX]={0};
		
		rep(i, N) {
			cin>>price[i];
			can[price[i]] = true;
		}
		
		for (int i=0; i<N; i++) {
			for (int j=0; j<MAX; j++) {
				if (can[j] && j+price[i]<=MAX) {
					can[j+price[i]] = true;
				}
			}
		}
		
		int ans=0;
		for (int i=0; i<=P; i++) {
			if (can[i] && isPrime[i])
				ans = i;
		}
		
		if (ans>0) {
			cout << ans << endl;
		} else {
			cout << "NA" << endl;
		}
	}
}
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
	double n;
	while(cin >> n) {
		double ret = n;
		double temp = n;
		rep(i,2,11) {
			if(i % 2 == 0) {temp *= 2; ret += temp;}
			else {temp /= 3; ret += temp;}
		}
		printf("%.8f\n",ret);
	}
}
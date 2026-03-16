#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
#define loop(i,a,b) for(int i=(a);i<ull(b);++i)
#define rep(i,n) loop(i,0,n)

const double eps = 1e-10;
const double pi  = acos(-1.0);
const double inf = (int)1e8;

/*素数判定*/
const int MAX = 1000100;
bool prime[MAX];

void sieve(){
	fill(prime, prime+MAX, true);
	prime[0] = prime[1] = false;

	for(int i=0; i < MAX; i++){
		if(!prime[i]) continue;
		for(int j=i+i; j < MAX; j += i){
			prime[j] = false;
		}
	}
}

int main(){
	int n, x;
	sieve();

	while(cin >> n >> x, n+x){
		bool b[1000100] = {false};
		vector<int> v(n);
		rep(i, n) cin >> v[i];

		b[0] = true;
		rep(i, n){
			for(int j=0; j <= x; j++){
				if(b[j] && v[i]+j <= x) b[v[i]+j] = true;
			}
		}
		int ret = -1;
		for(int i=0; i <= x; i++) if(b[i] && prime[i]) ret = i;
		if(ret == -1) cout << "NA" << endl;
		else cout << ret << endl;
	}
}
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define INF (1<<30)
#define INFLL (1ll<<60)
typedef pair<int, int> P;
typedef pair<int, P> E;
#define gt first
#define gc second.first
#define gr second.second
#define MOD (1000000007ll)
#define l_ength size
#define PI 3.14159265358979

void mul_mod(ll& a, ll b){
	a *= b;
	a %= MOD;
}

void add_mod(ll& a, ll b){
	b += MOD;
	a += b;
	a %= MOD;
}

int main(void){
	int n,g;
	while(scanf("%d",&n)!=EOF){
		g = 1;
		while(n > 0){
			if(n%2){
				cout << g << ((n/2)?" ":"\n");
			}
			n /= 2;
			g *= 2;
		}
	}
}


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()

#define PI acos(-1.0)
#define INF 1000000007

typedef long long ll; 
typedef pair<ll, ll> PL;

ll  n, b, c;
bool a[1000100];

int main(){
	REP(i, 1000100){
		a[i] = 1;
	}
	a[0] = 0;
	a[1] = 0;
	for (int i = 2; i <= 100000; i++){
		if (a[i]){
			for (int j = 0; i * (j + 2) < 1000000; j++){
				a[i *(j + 2)] = 0;
			}
		}
	}
	while (cin >> n){
		for (int i = n - 1; i > 0; i--){
			if (a[i] == 1){
				cout << i << " ";
				break;
			}
		}
		for (int i = n + 1; i < 100000; i++){
			if (a[i] == 1){
				cout << i << endl;
				break;
			}
		}
	}
}
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
#include <sstream>
#include <complex>

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define fi first
#define se second

#define PI acos(-1.0)
#define INF 1000000007
#define EPS 1e-10

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;

int prime[10000];
bool is_p[100000];

int n;

int main(){
	for (int i = 0; i <= 10000; i++) is_p[i] = 1;
	is_p[0] = is_p[1] = 0;
	/*int p = 0;*/
	for (int i = 2; i <= 10000; i++){
		if (is_p[i]){
			//prime[p++] = i;
			for (int j = i * 2; j <= 10000; j += i)is_p[j] = 0;
		}
	}
	while (cin >> n&&n){
		int p = -1, q = -1;
		for (int i = n; i > 0; i--){
			if (is_p[i] == 1){
				if (p == -1){
					p = i;
					continue;
				}
				if (q == -1){
					q = i;
					if (p - q == 2){
						cout << q << " " << p << endl;
						break;
					}
					else{
						p = q;
						q = -1;
					}
				}
			}
		}
	}
}
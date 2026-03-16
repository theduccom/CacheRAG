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

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;

int a, b;
V vi;
bool f = 0;
int main(){
	while (cin >> a >> b&&a+b){
		if (f)cout << "" << endl;
		f = 1;
		for (int i = a; i <= b; i++){
			if (i % 4 == 0){
				if (i % 100 == 0){
					if (i % 400 == 0){
						vi.push_back(i);
					}
					continue;
				}
				vi.push_back(i);
			}
		}
		if (vi.empty())cout << "NA" << endl;
		REP(i, vi.size()){
			cout << vi[i] << endl;
		}
		vi.clear();
	}
}
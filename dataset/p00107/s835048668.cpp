#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<ctime>
#include<cctype>
#include<climits>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<memory>
#include<functional>

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 999999999
using namespace std;

typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vd;
typedef pair<int, int> pii;
typedef pair<long, long> pll;
typedef long long ll;

int dy[] = { 0, 0, 1, -1, 0 };
int dx[] = { 1, -1, 0, 0, 0 };

int main(){
	ios::sync_with_stdio(false);

	int d, w, h;
	int n;
	int r[10000];

	double x1, x2, x3;

	while (1){
		cin >> d >> w >> h;

		if (d == 0 && w == 0 && h == 0){
			break;
		}

		cin >> n;

		x1 = sqrt(d*d + w*w)*0.5;
		x2 = sqrt(h*h + w*w)*0.5;
		x3 = sqrt(d*d + h*h)*0.5;


		for (int i = 0; i < n; i++){
			cin >> r[i];
		}

		for (int i = 0; i < n; i++){
			if (x1 < r[i] || x2 < r[i] || x3 < r[i]){
				printf("OK\n");
			}
			else{
				printf("NA\n");
			}
		}
	}

}
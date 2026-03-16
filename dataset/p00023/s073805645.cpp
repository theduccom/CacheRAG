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

int circle(double ra, double rb, double d){
	if((ra+rb)<d){
		return 0;
	}else{
		if(ra>(d+rb)){
			return 2;
		}else if(rb>(d+ra)){
			return -2;
		}else{
			return 1;
		}
	}
}

int main(){
	ios::sync_with_stdio(false);

	double a[2], b[2];
	double ra, rb;

	int n;
	scanf("%d", &n);

	while(n--){
		scanf("%lf %lf %lf %lf %lf %lf", &a[0], &a[1], &ra, &b[0], &b[1], &rb);

		double d=sqrt((b[0]-a[0])*(b[0]-a[0])+(b[1]-a[1])*(b[1]-a[1]));

		printf("%d\n", circle(ra, rb, d));
	}
}
#include <algorithm>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <vector>

using namespace std;

#define reps(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reps(i,0,n)

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

const int INF = 1001001001;

int main()
{
	int n;
	while(scanf("%d", &n), n){
		rep(i, n){
			int m, e, j;
			scanf("%d%d%d", &m, &e, &j);
			
			char c;
			if(m==100 || e==100 || j==100 || m+e>=180 || m+e+j>=240)
				c = 'A';
			else if(m+e+j >= 210 || (m+e+j>=150 && (m>=80 || e>=80)))
				c = 'B';
			else
				c = 'C';
			printf("%c\n", c);
		}
	}
	return 0;
}
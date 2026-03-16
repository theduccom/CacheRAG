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
		int hist[10] = {0};
		rep(i, n){
			int a;
			scanf("%d", &a);
			hist[a]++;
		}
		rep(i, 10){
			if(hist[i] == 0)
				puts("-");
			else
				puts(string(hist[i], '*').c_str());
		}
	}
	return 0;
}
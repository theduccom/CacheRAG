#include <stdio.h>
#include <vector>
#include <queue>
#include <set>
#include <utility>
#include <map>

#define rep(i, n) for(int i=0; i<(int)(n); i++)
using namespace std;

int dd[4] = { -1, 1, 4, -4 };

int swap(int s, int a, int b) {
	int buf[8];
	rep(i, 8) { buf[i] = s%8; s/=8; }
	swap(buf[a], buf[b]);
	int r=0;
	rep(i, 8) { r*=8; r+=buf[7-i]; }
	return r;
}

int main()
{
	int answer=0;
	rep(i, 8) { answer*=8; answer+=(7-i); }
	queue<pair<int, int> > q;
	q.push(make_pair(0, answer));
	map<int, int> dp;
	dp[answer] = 0;
	while(!q.empty()) {
		int c = q.front().first;
		int v = q.front().second;
		q.pop();
		int lz=-1;
		int t = v;
		rep(i, 8) {
			if(t%8==0) { lz=i; break; }
			t /= 8;
		}
		rep(d, 4) {
			if(0<=lz+dd[d] && lz+dd[d]<8
				&& !(lz==3 && dd[d]==1 || lz==4 && dd[d]==-1)) {
					int nv = swap(v, lz+dd[d], lz);
					if(dp.find(nv)!=dp.end()) continue;
					dp[nv] = c+1;
					q.push(make_pair(c+1, nv));
			}
		}
	}
	int buf[8];
	while(scanf("%d", buf)!=EOF) {
		rep(i, 7) scanf("%d", buf+i+1);
		int s = 0;
		rep(i, 8) { s*=8; s+=buf[7-i]; }
		printf("%d\n", dp[s]);
	}
	return 0;
}
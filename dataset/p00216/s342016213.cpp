#include<iostream>
#include<sstream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<algorithm>
#include<numeric>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cassert>

#define rep(i,n) for(int i=0;i<n;i++)
#define all(c) (c).begin(),(c).end()
#define mp make_pair
#define pb push_back
#define rp(i,c) rep(i,(c).size())
#define fr(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define dbg(x) cerr<<#x<<" = "<<(x)<<endl

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
const int inf=1<<28;
const double INF=1e12,EPS=1e-9;

int w;
int calc()
{
	int ret=1150;
	if(w<=10)return ret;
	ret+=min(10,w-10)*125;
	if(w<=20)return ret;
	ret+=min(10,w-20)*140;
	if(w<=30)return ret;
	ret+=(w-30)*160;
	return ret;
}
int main()
{
	while(scanf("%d",&w),w>=0)printf("%d\n",4280-calc());
	return 0;
}
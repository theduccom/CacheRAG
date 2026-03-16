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

int n,pm,pe,pj;
char cls()
{
	if(max(pm,max(pe,pj))==100||pm+pe>=180||pm+pe+pj>=240)return 'A';
	if(pm+pe+pj>=210||pm+pe+pj>=150&&max(pm,pe)>=80)return 'B';
	return 'C';
}
int main()
{
	while(scanf("%d",&n),n)
	{
		rep(i,n)
		{
			scanf("%d%d%d",&pm,&pe,&pj);
			printf("%c\n",cls());
		}
	}
	return 0;
}
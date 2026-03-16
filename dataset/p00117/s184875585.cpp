#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <complex>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <bitset>
#include <functional>
#include <utility>
#include <algorithm>
#include <numeric>
#include <typeinfo>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <ctime>

using namespace std;

#define dump(n) cout<<"# "<<#n<<"="<<(n)<<endl
#define debug(n) cout<<__FILE__<<","<<__LINE__<<": #"<<#n<<"="<<(n)<<endl
#define repi(i,a,b) for(int i=int(a);i<int(b);i++)
#define rep(i,n) repi(i,0,n)
#define iter(c) __typeof((c).begin())
#define foreach(i,c) for(iter(c) i=(c).begin();i!=(c).end();i++)
#define allof(c) (c).begin(),(c).end()
#define mp make_pair

typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<int,int> pii;

const int INFTY=1<<29;

int main()
{
	int n,m;
	cin>>n>>m;
	vvi adj(n,vi(n,INFTY));
	rep(i,n)
		adj[i][i]=0;
	rep(i,m){
		int a,b,c,d;
		scanf("%d,%d,%d,%d",&a,&b,&c,&d);
		adj[a-1][b-1]=c;
		adj[b-1][a-1]=d;
	}
	rep(k,n) rep(i,n) rep(j,n)
		adj[i][j]=min(adj[i][j],adj[i][k]+adj[k][j]);
	
	int src,dst,money,price;
	scanf("%d,%d,%d,%d",&src,&dst,&money,&price);
	
	int res=money-(price+adj[src-1][dst-1]+adj[dst-1][src-1]);
	cout<<res<<endl;
	
	return 0;
}
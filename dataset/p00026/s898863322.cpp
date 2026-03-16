#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <complex>
#include <functional>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <cctype>

using namespace std;

#define dump(n) cout<<"# "<<#n<<"="<<(n)<<endl
#define debug(n) cout<<__FILE__<<","<<__LINE__<<": #"<<#n<<"="<<(n)<<endl
#define repi(i,a,b) for(int i=int(a);i<int(b);i++)
#define rep(i,n) repi(i,0,n)
#define iter(c) __typeof((c).begin())
#define tr(c,i) for(iter(c) i=(c).begin();i!=(c).end();i++)
#define allof(c) (c).begin(),(c).end()
#define mp make_pair

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<int,int> pii;

int main()
{
	const int ink[3][4][2]={
		{1,0,0,1,-1,0,0,-1},
		{1,1,-1,1,-1,-1,1,-1},
		{2,0,0,2,-2,0,0,-2},
	};
	int paper[12][12]={0};
	for(int x,y,size;~scanf("%d,%d,%d",&x,&y,&size);){
		paper[2+y][2+x]++;
		rep(i,size)
			rep(j,4)
				paper[2+y+ink[i][j][0]][2+x+ink[i][j][1]]++;
	}
	
	int white=0,thick=0;
	rep(i,10){
		thick=max(thick,*max_element(paper[2+i]+2,paper[2+i]+12));
		white+=count(paper[2+i]+2,paper[2+i]+12,0);
	}
	cout<<white<<endl;
	cout<<thick<<endl;
	
	return 0;
}
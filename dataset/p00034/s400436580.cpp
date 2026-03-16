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

int solve(int a[],int v[])
{
	int sum=accumulate(a,a+10,0);
	int s=0;
	rep(i,10){
		s+=a[i];
		if(v[1]*s>=v[0]*(sum-s))
			return i+1;
	}
	return 10;
}

int main()
{
	for(int a[10],v[2];cin>>a[0];){
		repi(i,1,10)
			scanf(",%d",a+i);
		rep(i,2)
			scanf(",%d",v+i);
		cout<<solve(a,v)<<endl;
	}
	
	return 0;
}
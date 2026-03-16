#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cassert>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<utility>
#include<numeric>
#include<algorithm>
#include<bitset>
#include<complex>

using namespace std;

typedef long long Int;
typedef vector<int> vint;
typedef pair<int,int> pint;
#define mp make_pair

template<class T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; }
template<class T> void chmin(T &t, T f) { if (t > f) t = f; }
template<class T> void chmax(T &t, T f) { if (t < f) t = f; }
int in() { int x; scanf("%d", &x); return x; }

int beg[1010];

int main() {
	int n,m;
	while(n=in(),m=in()){
		int i;
		for(i=0;i<n;i++)beg[i]=in();
		sort(beg,beg+n,greater<int>());
		int res=0;
		for(i=0;i<n;i++){
			if((i+1)%m==0)continue;
			res+=beg[i];
		}
		cout<<res<<endl;
	}
	return 0;
}
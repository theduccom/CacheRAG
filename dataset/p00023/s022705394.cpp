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

int main() {
	int n=in(),i;
	for(i=0;i<n;i++){
		double xa,ya,ra,xb,yb,rb;
		cin>>xa>>ya>>ra>>xb>>yb>>rb;
		if((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb)<(ra-rb)*(ra-rb)){
			if(ra>rb)cout<<2;
			else cout<<-2;
		}else if((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb)>(ra+rb)*(ra+rb))cout<<0;
		else cout<<1;
		cout<<endl;
	}
	return 0;
}
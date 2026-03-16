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
	int a[3];
	while(a[0]=in(),a[1]=in(),a[2]=in()){
		int n=in();
		int i;
		sort(a,a+3);
		for(i=0;i<n;i++){
			int sz=in();
			if(a[0]*a[0]+a[1]*a[1]<4*sz*sz)cout<<"OK"<<endl;
			else cout<<"NA"<<endl;
		}
	}
	return 0;
}
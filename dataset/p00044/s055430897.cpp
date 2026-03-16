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

bool prime(int p){
	int i;
	for(i=2;i<p;i++){
		if(p%i==0)break;
	}
	return i==p;
}

int main() {
	int n;
	while(cin>>n){
		int p=n-1;
		while(!prime(p))p--;
		cout<<p<<" ";
		p=n+1;
		while(!prime(p))p++;
		cout<<p<<"\n";
	}
	return 0;
}
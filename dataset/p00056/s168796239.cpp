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

int sosu[50000];

int main() {
	sosu[0]=sosu[1]=1;
	for(int i=0;i<50000;i++){
		if(sosu[i])continue;
		for(int j=i*2;j<50000;j+=i){
			sosu[j]=1;
		}
	}
	int n;
	while(n=in()){
		int i;
		int res=0;
		for(i=0;i<=n/2;i++){
			if(sosu[i]+sosu[n-i]==0){
				res++;
			}
		}
		cout<<res<<endl;
	}
}
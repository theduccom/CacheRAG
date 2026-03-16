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

int mt[20][20];

int main() {
	int n;
	while(n=in()){
		int i,j;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				mt[i][j]=in();
			}
		}
		for(i=0;i<n;i++){
			int sum=0;
			for(j=0;j<n;j++){
				sum+=mt[i][j];
			}
			mt[i][n]=sum;
		}
		for(i=0;i<=n;i++){
			int sum=0;
			for(j=0;j<n;j++){
				sum+=mt[j][i];
			}
			mt[n][i]=sum;
		}
		for(i=0;i<=n;i++){
			for(j=0;j<=n;j++){
				printf("%5d",mt[i][j]);
			}
			cout<<endl;
		}
	}
	return 0;
}
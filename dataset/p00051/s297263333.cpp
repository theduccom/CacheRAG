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
int abo[4];
	
int main() {
	int n,num[8];
	n=in();
	int i;
	for(i=0;i<n;i++){
		int k;
		
		for(k=0;k<8;k++)scanf("%1d",num+k);
		//for(k=0;k<8;k++)cout<<num[k]<<endl;;
		sort(num,num+8);
		int mx=0,mn=0;
		for(k=0;k<8;k++){
			mx=mx*10+num[7-k];
			mn=mn*10+num[k];
		}
		cout<<mx-mn<<endl;
	}
	return 0;
}
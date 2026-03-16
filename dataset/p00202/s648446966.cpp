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

const int LIM=1000010;

bool sosu[LIM];
int ok[LIM];

int main() {
	int i,j;
	for(i=0;i<LIM;i++){
		sosu[i]=true;
	}
	sosu[0]=sosu[1]=false;
	for(i=0;i<LIM;i++){
		if(sosu[i]){
			for(j=i*2;j<LIM;j+=i){
				sosu[j]=false;
			}
		}
	}
	int n,x;
	while(n=in(),x=in()){
		int c;
		memset(ok,0,sizeof(ok));
		ok[0]=1;
		for(i=0;i<n;i++){
			cin>>c;
			for(j=c;j<LIM;j++){
				if(ok[j-c]){
					ok[j]=1;
				}
			}
		}
		for(;!sosu[x]||!ok[x];){
			x--;
			if(x==0)break;
		}
		if(x==0)cout<<"NA\n";
		else cout<<x<<endl;
	}
	return 0;
}
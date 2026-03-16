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

int sosu[10010];

int main() {
	sosu[0]=1;
	sosu[1]=1;
	int i,j;
	for(i=0;i<=10000;i++){
		if(sosu[i]==0){
			for(j=i*2;j<=10000;j+=i){
				sosu[j]=1;
			}
		}
	}
	int n;
	while(n=in()){
		while(sosu[n]+sosu[n-2]!=0){
			n--;
		}
		cout<<n-2<<" "<<n<<endl;
	}
	return 0;
}
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
	int n;
	int pm,pe,pj;
	while(n=in()){
		int i;
		for(i=0;i<n;i++){
			cin>>pm>>pe>>pj;
			if(pm==100||pe==100||pj==100||pm+pe>=180||pm+pe+pj>=240){
				cout<<"A"<<endl;
			}else if(pm+pe+pj>=210||(pm+pe+pj>=150&&(pm>=80||pe>=80))){
				cout<<"B"<<endl;
			}else{
				cout<<"C"<<endl;
			}
		}
	}
	return 0;
}
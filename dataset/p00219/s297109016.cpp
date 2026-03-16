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
	while(n=in()){
		int ice[10]={};
		int i;
		while(n--){
			cin>>i;
			ice[i]++;
		}
		for(i=0;i<10;i++){
			int j;
			if(ice[i]==0){
				cout<<"-\n";
			}else{
				for(j=0;j<ice[i];j++){
					cout<<"*";
				}
				cout<<endl;
			}
		}
	}
	return 0;
}
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

string mapp[10];

int xx[12]={1,2,3,-1,-2,-3,0,0,0,0,0,0};
int yy[12]={0,0,0,0,0,0,1,2,3,-1,-2,-3};

void f(int x,int y){
	mapp[y][x]='0';
	int i;
	for(i=0;i<12;i++){
		if(0<=x+xx[i]&&x+xx[i]<8&&0<=y+yy[i]&&y+yy[i]<8&&mapp[y+yy[i]][x+xx[i]]=='1')f(x+xx[i],y+yy[i]);
	}
}

int main() {
	int n=in();
	int i;
	for(i=0;i<n;i++){
		int k;
		for(k=0;k<8;k++){
			cin>>mapp[k];
		}
		int x,y;
		cin>>x>>y;
		f(x-1,y-1);
		cout<<"Data "<<i+1<<":\n";
		for(k=0;k<8;k++){
			cout<<mapp[k]<<endl;
		}
	}
	return 0;
}
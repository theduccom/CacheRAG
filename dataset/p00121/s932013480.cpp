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

int state[8][8][8][8][8][8][8];
priority_queue<pair<int,vector<int> >,vector<pair<int,vector<int> > >,greater<pair<int,vector<int> > > > bfs;

#define f(x,y) a[x]=a[y];a[y]=0;b[a[x]]=x;b[a[y]]=y;if(state[a[0]][a[1]][a[2]][a[3]][a[4]][a[5]][a[6]]==-1){state[a[0]][a[1]][a[2]][a[3]][a[4]][a[5]][a[6]]=n.first+1;bfs.push(mp(n.first+1,a));}a[y]=a[x];a[x]=0;b[a[x]]=x;b[a[y]]=y;

int main() {
	vector<int> a;
	memset(state,-1,sizeof(state));
	for(int i=0;i<8;i++)a.push_back(i);
	bfs.push(mp(0,a));
	state[a[0]][a[1]][a[2]][a[3]][a[4]][a[5]][a[6]]=0;
	while(!bfs.empty()){
		pair<int,vector<int> > n;
		n=bfs.top();
		bfs.pop();
		a=n.second;
		vector<int> b(8);
		int i;
		for(i=0;i<8;i++){
			b[n.second[i]]=i;
		}
		switch(b[0]){
		case 0:
			f(0,1);
			f(0,4);
			break;
		case 1:
			f(1,0);
			f(1,2);
			f(1,5);
			break;
		case 2:
			f(2,1);
			f(2,3);
			f(2,6);
			break;
		case 3:
			f(3,2);
			f(3,7);
			break;
		case 4:
			f(4,0);
			f(4,5);
			break;
		case 5:
			f(5,1);
			f(5,4);
			f(5,6);
			break;
		case 6:
			f(6,2);
			f(6,5);
			f(6,7);
			break;
		case 7:
			f(7,3);
			f(7,6);
			break;
		}
	}
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]){
		cout<<state[a[0]][a[1]][a[2]][a[3]][a[4]][a[5]][a[6]]<<endl;
	}
	return 0;
}
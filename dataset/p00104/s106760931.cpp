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

string mt[200];
int used[200][200];

int main() {
	int h,w;
	while(~scanf("%d %d\n",&h,&w),h){
		int x,y;
		for(y=0;y<h;y++){
			cin>>mt[y];
		}
		memset(used,0,sizeof(used));
		pint pos(0,0);
//cout<<"hoge"<<endl;
//cout<<mt[0][0]<<endl;
//cout<<'>'<<endl;
		while(mt[pos.second][pos.first]!='.'){
//cout<<pos.first<<" "<<pos.second<<endl;
			if(used[pos.second][pos.first]==1)break;
			used[pos.second][pos.first]=1;
			if(mt[pos.second][pos.first]=='>'){
				pos.first++;
			}else if(mt[pos.second][pos.first]=='<'){
				pos.first--;
			}else if(mt[pos.second][pos.first]=='v'){
				pos.second++;
			}else{
				pos.second--;
			}
		}
		if(mt[pos.second][pos.first]!='.')cout<<"LOOP"<<endl;
		else cout<<pos.first<<" "<<pos.second<<endl;
	}
	return 0;
}
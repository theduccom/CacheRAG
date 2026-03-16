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
string str[12];

void f(int x,int y){
	str[y][x]='0';
	if(0<x&&str[y][x-1]=='1')f(x-1,y);
	if(x<11&&str[y][x+1]=='1')f(x+1,y);
	if(0<y&&str[y-1][x]=='1')f(x,y-1);
	if(y<11&&str[y+1][x]=='1')f(x,y+1);
}

int main() {
	while(cin>>str[0]){
		int i;
		for(i=1;i<12;i++)cin>>str[i];
		int x,y,res=0;
		for(y=0;y<12;y++){
			for(x=0;x<12;x++){
				if(str[y][x]=='1'){
					res++;
					f(x,y);
				}
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
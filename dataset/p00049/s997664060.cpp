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
	string str;
	for(;~scanf("%*f");){
		getchar();
		cin>>str;
		if(str=="A")abo[0]++;
		if(str=="B")abo[1]++;
		if(str=="AB")abo[2]++;
		if(str=="O")abo[3]++;
	}
	cout<<abo[0]<<endl;
	cout<<abo[1]<<endl;
	cout<<abo[2]<<endl;
	cout<<abo[3]<<endl;
	return 0;
}
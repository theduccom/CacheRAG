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
	string str;
	for(;cin>>str;){
		int len=str.size(),i;
		for(i=0;i<len;){
			if(str[i]=='@'){
				int k=str[i+1]-'0';
				for(;k--;)cout<<str[i+2];
				i+=3;
			}else{
				cout<<str[i];
				i++;
			}
		}
		cout<<endl;
	}
	return 0;
}